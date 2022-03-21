#include "main.h"

/**
 *
 */
int _printf_char(va_list c)
{
	int cstr = va_arg(c, int);

	write(1, &cstr, 1);

	return (1);
}

