#include "main.h"

/**
 *
 */
int (*get_op_func(const char *format))(va_list arg)
{
	int j = 0;
	int i = 0;

	while (types[j].type)
	{
		if (format[i + 1] == *(types[j].type))
		{
			return (types[j].function);
		}
		j++;
	}
	return (types[j].function);
}
