#include "main.h"

/**
 *
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*func)(va_list);
	int i = 0;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_op_func(&format[i]);
			if (func != NULL)
			{
				func(ap);
			}
		}
		i++;
	}
	va_end(ap);
	return (0);
}

