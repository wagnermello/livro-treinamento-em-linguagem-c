/*Operador de incremento*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 5;
    int x = ++n; // Operador de incremento prefixado
    printf("Incremento prefixado: n = %d   x = %d\n", n, x);

    int m = 5;
    int y = n++; // Operador de incremento pós-fixado
    printf("Incremento pós-fixado: m = %d   y = %d\n", m, y);

    system("PAUSE");
    return 0;
}