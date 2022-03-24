#include "main.h"

/**
 * print_char - prints a character
 * @c: character to be printed
 *
 * Return: len of c
 */
int print_char(va_list c)
{
	int character = va_arg(c, int);

	_putchar(character);

	return (1);
}

/**
 * print_string - prints a string
 * @s: string to be printed
 *
 * Return: len of s
 */
int print_string(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (_strlen(str));
}

/**
 * reverse_str - function that reverse a string
 * @str: string to be reversed
 *
 * Return: reversed string
 */
int print_rev_str(va_list args)
{
	int h, len;
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}
	len = _strlen(str);
	for (h = len - 1; h >= 0; h--)
	{
		_putchar(str[h]);
	}
	return (len);
}
