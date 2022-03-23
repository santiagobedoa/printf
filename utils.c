#include "main.h"

/**
 * reverse_str - function that reverse a string
 * @str: string to be reversed
 *
 * Return: reversed string
 */
char *reverse_str(char *str)
{
	int i = 0;
	int len = 0;
	char tmp;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	for (; i < (len / 2); i++)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
	return (str);
}

/**
 * int_to_arg - (itoa) function that converts any value from int to string
 * @i: integer type
 * @buffer: space in memory to handle str size
 * @base: base to convert values
 *
 * Return: buffer that contains the final string
 */
char *int_to_arg(int i, char *buffer, int base)
{
	char *str = buffer;
	int digit;
	int negative = 0;

	if (i < 0)
	{
		negative = 1;
		i *= -1;
	}
	while (i)
	{
		digit = i % base;
		if (digit >= 0 && digit <= 9)
		{
			*str = '0' + digit;
			if (i / base == 0)
			{
				break;
			}
		}
		i = i / base;
		str++;
	}
	if (negative)
	{
		*str++ = '-';
	}
	*str = '\0';
	reverse_str(buffer);
	return (buffer);
}
