#include "main.h"

/**
 * print_decimal - function that prints an integer and return its length
 * @i: integer to be printed
 *
 * Return: length of i
 */
int print_decimal(va_list i)
{
	int num = va_arg(i, int);
	int len = _intlen(num);

	if (num <= 0)
	len++;
		_putnum(num);
	return (len);
}
