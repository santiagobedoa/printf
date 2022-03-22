#include "main.h"

/**
 * get_op_func - get function that match with the char after %
 * @format: format to by mapped in the type structure
 *
 * Return: function pointer that points to the desire function
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
