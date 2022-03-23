#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%!\n");
	len2 = printf("%!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("l1 %d\n", len);
		printf("l2 %d\n", len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
