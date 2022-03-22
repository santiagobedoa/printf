#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* PROTOTYPES */

/* MAIN FUNCTION */
int _printf(const char *format, ...);
int (*get_op_func(const char *format))(va_list);

/* PRINTF FUNCTION TYPES */
int print_char(va_list);
int print_string(va_list);


/* STRUCTURES */
typedef struct functions
{
	char *type;
	int (*function)(va_list);
} functions_t;

static const functions_t types[] = {
	{"c", print_char},
	{"s", print_string},
	{NULL, NULL}
};

#endif
