#include <stdio.h>
#define MAX 1000


int lettura(int vet[MAX])
{   

    int n;
  do{
        printf("\ninserire il numero di elementi:");
        scanf("%d",&n);
    } while(n < 0);


    for(int a = 0;a<=n;a++)
    {
        printf("\ninsererire il %d elemento:",a);
        scanf("%d",&vet[a]);

    }
    return n;
}

int conta(int n ,int vet[MAX],int x)
{
    int contatore = 0;
    for(int a=0;a<n -1 ;a++)
    {
        if(vet[a]>x)
        {
           contatore ++; 
        }
    }
    return contatore;
}

int main()
{
    int n;
    int vet[MAX];
    int x;
    int cont;

    FILE *fp;

    fp=fopen("X.txt","r");
    fscanf(fp,"%d",&x);

    n = lettura(vet);
    cont =   conta(n,vet,x);

    printf("gli elementi superiori ad X sono: %d",cont)


}