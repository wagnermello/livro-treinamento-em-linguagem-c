/*Mostra o uso de scanf() com várias entradas*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, p3, p4;
    double media;

    printf("Digite as 4 notas: \n");
    scanf("%f%f%f%f", &p1, &p2, &p3, &p4);

    media = (p1 + p2 + p3 + p4) / 4.0;

    printf("A média das 4 notas é: %.2f\n", media);

    system("PAUSE");
    return 0;
}