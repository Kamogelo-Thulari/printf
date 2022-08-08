/*
 * File printc.c
 */

#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printch - prints a character
 *
 * Return: pointer to function.
 */
void printch(va_list argl)
{
	char ch;
	char *pch;

	ch = va_arg(argl, int);
	pch = &ch;
	write(1, pch, 1);
}
