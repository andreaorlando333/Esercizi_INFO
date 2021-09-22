#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
Calcolare la somma degli elementi di posizione pari
e quelli di posizione dispari di un vettore
(procedura con 2 parametri per indirizzo).
*/

int inserisciVettore(int *vet);
void sommaPariDispari(int *vet, int n, int *sommaP, int *sommaD);
void stampaPariDispari(int sommaP, int sommaD);

int main()
{
    int vet[DIM], n, sommaP, sommaD;

    n=inserisciVettore(vet);

    sommaPariDispari(vet, n, &sommaP, &sommaD);

    stampaPariDispari(sommaP, sommaD);

    printf("\n");
    system("pause");
    return 0;
}
int inserisciVettore(int *vet)
{
    int n, i;

    printf("Inserire la grandezza del vettore: ");
    scanf("%d", &n);

    printf("\n");

    for(i=0; i<n; i++) {
        printf("Inserire un numero: ");
        scanf("%d", &vet[i]);
    }

    return n;
}
void sommaPariDispari(int *vet, int n, int *sommaP, int *sommaD)
{
    int i;

    *sommaP=0;
    *sommaD=0;

    for(i=0; i<n; i++) {
        if(vet[i]%2==0) {
            *sommaP=*sommaP+vet[i];
        } else {
            *sommaD=*sommaD+vet[i];
        }
    }
}
void stampaPariDispari(int sommaP, int sommaD)
{
    printf("Somma degli elementi in posizione pari: ");
    printf("%d", sommaP);

    printf("\n");

    printf("Somma degli elementi in posizione dispari: ");
    printf("%d", sommaD);

}