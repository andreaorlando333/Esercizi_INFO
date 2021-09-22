#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void stampa(int n,int c){
    
    for(int i = 0; i< n;i++){
        printf("%c",c);
    }

}

int main(){
    int n;
    int c;

    printf("\n inserire un carattere:");
    scanf("%c",&c);

    printf("/n inserie il numero di volte da stampare:");
    scanf("%d",&n);

    stampa(n,c);
}
