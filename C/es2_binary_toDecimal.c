#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0,
    int potenza = 1,
    int pos;
    char ingresso[32+1];
    printf("Inserisci il numero da convertire: ");
    gets(ingresso);
    pos = strlen(ingresso)-1;
    while (pos>=0)
    {
    switch(ingresso[pos])
        {
        case '0' :
        break;
        case '1' :
        n += potenza;
        break;
        default :
        printf("Ingresso non valido\n");
        exit(-1);
        }
    potenza *= 2;
    pos--;
    }
 printf("%d\n",n);
} 