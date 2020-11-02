#include <stdio.h>
#define MAX 100





int main ()
{
    int n;
    int a;
    int j=0,k=0;
    int dispari[MAX];
    int pari[MAX];
    FILE *fp;
    fp=fopen("numeri.txt","r");

    fscanf(fp,"%d",&n);

    for(int i = 0;i<=n-1;i++)
    {
        fscanf(fp,"%d",&a);
        if(a % 2 == 0)
        {
            pari[j]=a;
            j++;
        }
        else
        {
            dispari[k]=a;
            k++;
        }
    }

    for(int i = 0;i<=j-1;i++)
    {
        printf("%d ",pari[i]);

    }

    printf("\n");

    for(int i = 0;i<=k-1;i++)
    {
        printf("%d ",dispari[i]);

    }


    return 0;
}