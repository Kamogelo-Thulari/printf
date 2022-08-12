/*
 * File print_str.c
 */

#include "main.h"

/**
 * print_str - prints a string
 * 
 * Return: num for length of string.
 */
int print_str(char *str)
{
	int num, i;

	for (i = 0; (str[i]) != '\0'; i++)
	{
		num += _putchar((str[i]));
	}

	return (num);
}
