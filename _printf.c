/*
 * File _printf.c
 */

#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to format
 * @format: character string to be printed
 *
 * Return: 0 upon success
 */
int _printf(const char *format, ...)
{
	int l;
	va_list arg;

	va_start(arg, format);

	for (l = 0; *(format + l) != '\0'; l++)
		write(1, format + l, 1);
	{
		if (*(format + l) == '%')
		{
			conversion(format + ++l)(arg);
		}
		else
		{
			write(1, format + l, 1);
		}
	}
	
	return (0);
}
