#include "main.h"

/**
 * print_decimal - function that prints a decimal num
 * @d: va_list
 *
 * Return: length of the string without null byte
 */
/**int print_decimal(va_list d)
{
	int i = 0;
	char buffer[1024];

	int_to_arg(va_arg(d, int), buffer, 10);
	for (; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (_strlen(buffer));
}
*/
/**
 * print_integer - print unsigned integer
 * @integer: unsigned integer to be printed
 *
 * Return: length of i
 */
int print_integer(va_list integer)
{
	int i = 0;
	char buffer[1024];
	
	int_to_arg(va_arg(integer, int), buffer, 10);
	for (; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (_strlen(buffer));
}

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int sum = count_digit(n);

	if (n <= 0)
	sum++;
		print_number(n);
	return (sum);
}

