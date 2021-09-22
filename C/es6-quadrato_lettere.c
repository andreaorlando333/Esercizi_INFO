#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void stampa(int n,int c){
    for(int j  =0 ;j<n;j++){
        for(int i = 0; i< n;i++){
        printf("%c",c);
        }
        printf("\n");
    }
    
    

}

int main(){
    int n;
    int c;

    printf("\n inserire un carattere:");
    scanf("%c",&c);

    printf("\ninserie il numero:");
    scanf("%d",&n);

    stampa(n,c);
}
