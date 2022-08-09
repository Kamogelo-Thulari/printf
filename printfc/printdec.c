/*
 * File printdec.c
 */

#include "main.h"

/**
 * printdec - prints numbersto the base of 10.
 * @val: the number to be printed.
 *
 * Return: num
 */
int printdec(long int val)
{
	int num = 0;

	/*accounting for negative numbers*/
	if (val < 0)
	{
		num += _putchar('-');

		val = val * -
		num = val * - 1;
>>>>>>> e10153ca475ffb75f70c93b5fb1be044e32c1069
	}

	if (val / 10)
	{
		num += printdec(val / 10);
	}
	
	num += _putchar(val % 10 + '0');

	return (num);
}
