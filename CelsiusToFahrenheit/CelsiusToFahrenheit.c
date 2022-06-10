/*Converte temperaturas de graus Celsius para Fahrenheit*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ftemp, ctemp;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &ctemp);

    ftemp = (ctemp * 9) / 5 + 32;
    printf("\nA temperatura de %.2f°C em graus Fahrenheit é %.2f°F\n", ctemp, ftemp);

    system("PAUSE");
    return 0;
}