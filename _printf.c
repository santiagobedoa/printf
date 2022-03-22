#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: specify the text format
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*func)(va_list);
	int i = 0;
	int len_format;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_op_func(&format[i]);
			if (func != NULL)
			{
				len_format = func(ap);
			}
		}
		i++;
	}
	va_end(ap);
	return (len_format);
}

