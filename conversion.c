/*
 * File conversion.c
 */

#include "main.h"
#include <stdlib.h>
#include <unistd.h>i
#include <stdarg.h>

/**
 * conversion - matches symbols with their corresponding functions.
 * @symb: conversion specifier to match.
 *
 * Return: pointer to the function matched by symb.
 */
void (*conversion(const char *symb)(va_list argl))
{
	format func[] = {
		{"c", printch},
	};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (*symb == *(func[i].letter))
			return (func[i].f);
	}
	write(2, "symbol not found", 17);
	exit(1);
}
