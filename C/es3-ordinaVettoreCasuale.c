
//scrivi un programma che riempia casualmente un vettore di n numeri
//garantendo che siano presenti in senso crescente.

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define MAX 100
void bubble_sort(int num[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++){

        for (j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }
}

void riempi(int num[],int n){
    srand(time(NULL));
    for(int i = 0;i<n;i++){
        num[i]= rand() % 100 + 1;
    }
}

void stampa(int num[],int n){
    for(int i = 0;i<n;i++){
        printf("\n-%d",num[i]);
    }
}

int main(){
    int numeri[MAX];
    int n = 10;

    riempi(numeri,n);
    bubble_sort(numeri,n);
    stampa(numeri,n);



}