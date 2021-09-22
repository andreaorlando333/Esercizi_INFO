#include <stdio.h>
#include <stdlib.h>
#define N 11

void tabellina(int n,int vet[]){
    for(int i  =0;  i < N;i++){
        vet[i]= n * i;
    }
}

void stampa(int vet[],int n){
    for(int i = 0;i<N;i++){
        printf("\n%d x %d = %d",n, i,vet[i]);
    }
}



int main(){
    int num;
    int tab[N];

    printf("\n\ninserire il numero di cui si vuole calcolare la tabellina:");
    scanf("%d",&num);

    tabellina(num,tab);
    stampa(tab,num);




}