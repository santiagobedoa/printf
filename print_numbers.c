#include "main.h"

/**
 * print_integer - print unsigned integer
 * @integer: unsigned integer to be printed
 *
 * Return: length of i
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int sum = _intlen(num);

	if (num <= 0)
	sum++;
		_putnum(num);
	return (sum);
}

