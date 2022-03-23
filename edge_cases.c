#include "main.h"

/**
 * edge_cases - evaluate edges cases
 * @format: string in printf
 * @edge: valist
 * Return: Error -1 or 0
 */
int edge_cases_finder(const char *format, va_list edge)
{
	if (format == NULL)
	{
		return (-1);
	}
	else if (format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
	else if (format[0] == '%' && format[1] == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
