#include <stdio.h>

int main ()
{
    FILE *fp;
    int n;
    int r;
    int cont = 0;

    fp = fopen("input.txt","r");

    fscanf(fp,"%d",&n);

    printf("%d ",n);

    for(int i = n;i>0;i--)
    {
        r = n % i;
        if(r == 0)
        {
            cont++;
        }
        r = 0;
    }

    if (cont == 1)
    {
        printf("e' un numero primo\n");
    }
    else
    {
        printf("non e' un numero primo\n");
    }
    
    return 0;
}