/* Mostra a função getchar() e putchar() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Pressione uma tecla ");
    ch = getchar();
    printf("A tecla sucessora ASCII é ");
    putchar(ch + 1);
    putchar('\n');
    system("PAUSE");
    return 0;
}