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
	int len_arg = 0;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			len_arg++;
			i += 2;
			continue;
		}
		else if (format[i] == '%')
		{
			func = get_op_func(&format[i]);
			if (func != NULL)
			{
				len_arg += func(ap);
				i += 2;
				continue;
			}
			else
			{
				if (format[i] == '%' && format[i + 1] == '\0')
				{
					len_arg++;
					putchar(format[i]);
				}
			}
		}
		/* if format[i] == \n */
		else if (format[i] == 92 && format[i + 1] == 110)
		{
			putchar('\n');
			break;
		}
		else if (format[i] != '\0')
		{
			putchar(format[i]);
			len_arg++;
		}
		i++;
	}
	va_end(ap);
	return (len_arg);
}
