#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1 otherwise return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *
 */
void _putnum(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		_putnum(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * _strlen - function that returns the length of a string
 * @s: string to be processed
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * _intlen - function that returns the length of an int
 * @i: integer to be processed
 *
 * Return: length of the int
 */
int _intlen(int i)
{
	int len = 0;
	unsigned int integer;

	if (i < 0)
	{
		integer = i * -1;
	}
	else
	{
		integer = i;
	}
	while (integer != 0)
	{
		integer /= 10;
		len++;
	}
	return (len);
}
