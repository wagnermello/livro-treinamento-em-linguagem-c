/*InitVars.c
 *Mostra a inicialização de variáveis*/

#include <stdio.h>  /*Para printf()*/
#include <stdlib.h> /*Para system()*/

int main()
{
    int evento = 5;     /* Define evento inicializada com 5 */
    char corrida = 'C'; /* Define corrida inicializada com C */

    float tempo = 27.25; /* Define tempo inicializada com 27.25 */

    printf("\nO tempo vitorioso na eliminatória %c", corrida);
    printf("da competição %d foi %.2f.\n", evento, tempo);

    system("PAUSE");
    return 0;
}