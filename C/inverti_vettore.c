#include <stdio.h>

int main ()
{
    FILE * fp;

    int lung;

    fp = fopen("input.txt","r");

    fscanf(fp,"%d",&lung);

    int vet[lung];

    printf("%d  \n",lung);

    for(int i = 0;i<= lung; i++)
    {
        fscanf(fp,"%d",&vet[i]);
        printf("%d",vet[i]);
        
    }

    printf("\n");

    int a = lung - 1;

    int k; 
    

    for(int j = 0; j <=lung/2; j++)
    {
        
        k=vet[j];
        vet

        vet[a]= k;

        a = a  -   1;
        
    }

    for(int i = 0;i<= lung; i++)
    {
        
        printf("%d",vet[i]);
        
    }






    return 0;

}
