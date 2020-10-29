#include <stdio.h>

#define MAX 1000

int lettura(int vet[MAX])
{   

    int n;
  do{
        printf("\ninserire il numero di elementi:");
        scanf("%d",&n);
    } while(n < 0);


    for(int a = 0;a<n;a++)
    {
        printf("insererire il %d elemento:",a);
        scanf("%d",&vet[a]);

    }
    return n;
}

int stampa(int n, int vet[MAX])
{
    for(int a=0;a<n;a++)
    {
        printf("%d",vet[a]);
    }
}

int conta(int n, int vet[MAX])
{
    int contatore = 0;
    
    for(int a=0; a<n-1; a++)
    {
        if(vet[a]>vet[a+1])
        {
            contatore++;
        
        }
    }
    return contatore;
}

int main ()
{
    int n;
    int vet[MAX];
    int result;
    
    n = lettura(vet);
    result = conta(n, vet);
    printf("Il risultato è %d", result);

    return 0;
}