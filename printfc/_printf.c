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
<<<<<<< HEAD
<<<<<<< HEAD
	int num = 0, l;
	va_list argl;

	va_start(argl, format);
	for (l = 0; format[l] != '\0'; l++)
	{
		if (format[l] != '%')
		{
			num += _putchar(format[l]);
			l++;
		}
		else if (format[l] =='%' && format[l + 1] != ' ')
		{switch (format[l + 1])
			{
				case 'c':
					num += _putchar(va_arg(argl, int));
					break;

				case 's':
					num += print_str(va_arg(argl, char *));
					break;

				case '%':
					num += _putchar('%')
					break

				case 'd':
					num += printdec(va_arg(argl, int));
					break;
				default:
				break;
			}
			va_end(argl);
		}
			l += 2;
	} 
	return (num);
=======
	int l;
	va_list arg;
=======
	int num = 0, l;
	va_list argl;
>>>>>>> e10153ca475ffb75f70c93b5fb1be044e32c1069

	va_start(argl, format);
	for (l = 0; format[l] != '\0'; l++)
	{
		if (format[l] != '%')
		{
			num += _putchar(format[l]);
			l++;
		}
		else if (format[l] =='%' && format[l + 1] != ' ')
		{switch (format[l + 1])
			{
				case 'c':
					num += _putchar(va_arg(argl, int));
					break;

				case 's':
					num += print_str(va_arg(argl, char *));
					break;

				case 'd':
					num += printdec(va_arg(argl, int));
					break;
				default:
				break;
			}
			va_end(argl);
		}
<<<<<<< HEAD
	}
	
	return (0);
>>>>>>> 206e6babe77460fe60fed43ea9d7f6e0ad0f5c2e
=======
			l += 2;
	} 
	return (num);
>>>>>>> e10153ca475ffb75f70c93b5fb1be044e32c1069
}
