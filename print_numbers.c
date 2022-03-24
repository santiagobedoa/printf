#include "main.h"

/**
 * print_decimal - function that prints a decimal num
 * @d: va_list
 *
 * Return: length of the string without null byte
 */
int print_decimal(va_list d)
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
