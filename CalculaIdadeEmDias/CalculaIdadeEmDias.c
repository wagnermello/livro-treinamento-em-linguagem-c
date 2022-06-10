/*Calcula a idade em dias*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
    float anos, dias;
    printf("Digite sua idade em anos: ");
    scanf("%f", &anos);
    dias = anos * 365;
    printf("\nA sua idade em dias é: %.0f.\n", dias);

    system("PAUSE");
    return 0;
}