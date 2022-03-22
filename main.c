#include "main.h"

int main(void)
{
        int len;

        _printf("1. Aqui deberia ir %s\n", "Hola Mundo!");
        _printf("2. Esto es otra linea%c y mas texto\n", '!');
        putchar('\n');

        len = _printf("Let's try to printf a simple sentence. %s\n", "hola");
        printf("Length:[%d]\n", len);
        putchar('\n');

        _printf("%s %s\n","HOLA", "MUNDO");
        putchar('\n');

        len = _printf("%d\n", 10);
        _printf("len of 10 is %d\n", len);

        return (0);
}
