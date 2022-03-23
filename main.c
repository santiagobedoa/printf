#include "main.h"

int main(void)
{
	int len;

	_printf("PRUEBA S Y C\n");
	_printf("1. Aqui deberia ir %s\n", "Hola Mundo!");
	_printf("2. Esto es otra linea%c y mas texto\n", '!');
	putchar('\n');

	_printf("PRUEBA LEN\n");
	len = _printf("Let's try to printf a simple sentence.\n", "hola");
	printf("Length:[%d, %i]\n", len, len);
	putchar('\n');

	_printf("%s %s\n", "HOLA", "MUNDO");
	putchar('\n');

	_printf("PRUEBA NEGATIVES\n");
	_printf("printing negative d: %d, i: %i\n", -2, -4);
	putchar('\n');

	_printf("HANDELING PORCENT\n");
	_printf("Percent: [%%]\n");

	return (0);
}
