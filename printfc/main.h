#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_str(char *str);
char _putchar(char c);
int printdec(long int val);
=======
typedef struct formatter {
	char *symb;
	void (*f)(char *);
	char *letter;
	void (*f)(va_list argl);
}format;
int _printf(const char *format, ...);
void printch(va_list argl);
void (*conversion(const char *))(va_list argl);
>>>>>>> 206e6babe77460fe60fed43ea9d7f6e0ad0f5c2e
=======
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_str(char *str);
char _putchar(char c);
int printdec(long int val);
>>>>>>> e10153ca475ffb75f70c93b5fb1be044e32c1069

#endif
