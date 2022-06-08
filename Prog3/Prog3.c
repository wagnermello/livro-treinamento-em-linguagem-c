/* Este programa mostra a declaração de variáveis */
/* Prog3.c */
#include <stdio.h>  /*Para printf()*/
#include <stdlib.h> /*Para system()*/

int main()
{
    /*Variáveis devem ser declaradas no início do bloco.*/
    int num1;
    int num2;

    num1 = 44;
    num2 = num1 + 20;

    printf("\nO primeiro número é %d", num1);
    printf("\nO segundo número é \"num1 + 20\" = %d\n", num2);

    system("PAUSE");
    return 0;
}
