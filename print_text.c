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

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (strlen(str));
}
