/* PrintTabela.c */
/* Imprimindo uma tabela */
#include <stdio.h>  /*Para printf()*/
#include <stdlib.h> /*Para system()*/

int main()
{
    /*** Tamanho de campo com inteiros ***/
    /*int lapis = 45, borrachas = 2345, canetas = 420, cadernos = 8, fitas = 13050;
    printf("\nLapis       %12d", lapis);
    printf("\nBorrachas   %12d", borrachas);
    printf("\nCanetas     %12d", canetas);
    printf("\nCadernos    %12d", cadernos);
    printf("\nFitas       %12d\n", fitas);

    system("PAUSE");
    return 0;*/

    /*** Tamanho de campo com ponto flutuante EXEMPLO 01 ***/
    printf("\n\n***TABELA COM PONTO FLUTUANTE EXEMPLO 01***\n");
    float lapis = 4.875, borrachas = 234.542, canetas = 42.036, cadernos = 8.0, fitas = 13.05;
    printf("\nLapis       %12.2f", lapis);
    printf("\nBorrachas   %12.2f", borrachas);
    printf("\nCanetas     %12.2f", canetas);
    printf("\nCadernos    %12.2f", cadernos);
    printf("\nFitas       %12.2f\n", fitas);

    /*** Tamanho de campo com ponto flutuante - EXEMPLO 02 ***/
    printf("\n\n***TABELA COM PONTO FLUTUANTE EXEMPLO 02***\n");
    printf("\n%4.2f\n", 3456.78);
    printf("%3.2f\n", 3456.78);
    printf("%3.1f\n", 3456.78);
    printf("%10.3f\n", 3456.78);

    /*** Tabela sem tamanho de campo ***/
    printf("\n\n***TABELA SEM TAMANHO DE CAMPO***\n");
    printf("%.2f %.2f %.2f \n", 8.0, 15.3, 584.13);
    printf("%.2f %.2f %.2f \n", 834.0, 1500.55, 4890.21);

    /*** Tabela com tamanho de campo alinhado à direita ***/
    printf("\n\n***TABELA COM TAMANHO DE CAMPO ALINHADO À DIREITA***\n");
    printf("%10.2f %10.2f %10.2f \n", 8.0, 15.3, 584.13);
    printf("%10.2f %10.2f %10.2f \n", 834.0, 1500.55, 4890.21);

    /*** Tabela com tamanho de campo alinhado à esquerda ***/
    printf("\n\n***TABELA COM TAMANHO DE CAMPO ALINHADO À ESQUERDA***\n");
    printf("%-10.2f %-10.2f %-10.2f \n", 8.0, 15.3, 584.13);
    printf("%-10.2f %-10.2f %-10.2f \n", 834.0, 1500.55, 4890.21);

    /*** Tamanho de campo com cadeias de caracteres ***/
    printf("\n\n***TAMANHO DE CAMPO COM CADEIS DE CARACTERES***\n");
    printf("\nOBJETO     %12s", "CÓDIGO");
    printf("\nLápis      %12s", "WOR");
    printf("\nBorrachas  %12s", "ASO");
    printf("\nCanetas    %12s", "KPX");
    printf("\nCadernos   %12s", "FJI");
    printf("\nFitas      %12s", "TYE");

    /*** Tamanho de campo e complementando com zeros ***/
    printf("\n\n***TAMANHO DE CAMPO E COMPLEMENTANDO COM ZEROS***\n");
    printf("%04d\n", 21);
    printf("%06d\n", 21);
    printf("%6.4d\n", 21);
    printf("%6.0d\n", 21);

    system("PAUSE");
    return 0;
}