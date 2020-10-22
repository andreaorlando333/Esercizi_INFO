#include <stdio.h>
#include <stdlib.h>

int sommaNdisp(int n)
{
    int sommaDispari = 0;
    int k = 1;
    for(k=1; k<n; k++){
        if(k%2==0){
            sommaDispari = sommaDispari + k;
        }
    }
    return sommaDispari;
}

int main()
{
    int n;
    int somma;
    printf("Inserisci un numero intero... ");
    scanf("%d", &n);
    
    somma = sommaNdisp(n);
    printf("\nSomma dei numeri dispari fino a N: %d", somma);

    if(somma == n*n){
        printf("\nLa somma dei numeri dispari è uguale al quadrato del numero n.");

    }else{
        printf("\nLa somma dei numeri dispari non è uguale al quadrato del numero n.\n\n");
    }
    return 0;
}