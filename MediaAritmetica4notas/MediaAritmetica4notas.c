/* Mostra operadores aritméticos de atribuição */
/* Calcula a média aritmética de 4 notas */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    float media = 0.0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    media += nota;

    printf("Digite a segunda nota: ");
    scanf("%f", &nota);
    media += nota;

    printf("Digite a terceira nota: ");
    scanf("%f", &nota);
    media += nota;

    printf("Digite a quarta nota: ");
    scanf("%f", &nota);
    media += nota;

    media /= 4.0;
    printf("MÉDIA : %.2f\n", media);
    system("PAUSE");
    return 0;
}