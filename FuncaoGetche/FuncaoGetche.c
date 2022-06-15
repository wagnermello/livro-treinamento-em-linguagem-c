/* Mostra a função getche */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\nPressione uma tecla ");
    ch = getche(); /* Aguarda uma tecla no teclado */
    printf("\nA tecla sucessora ASCII é %c\n", ch + 1);

    system("PAUSE");
    return 0;
}