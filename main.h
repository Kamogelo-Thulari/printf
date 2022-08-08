#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
typedef struct formatter {
	char *symb;
	void (*f)(char *);
	char *letter;
	void (*f)(va_list argl);
}format;
int _printf(const char *format, ...);
void printch(va_list argl);
void (*conversion(const char *))(va_list argl);

#endif
