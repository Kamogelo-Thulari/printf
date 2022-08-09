#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_str(char *str);
char _putchar(char c);
int printdec(long int val);

#endif
