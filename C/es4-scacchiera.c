#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void stampa(int n,char a,char b){
    int cont = 0;
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<n;j++){
            
            if(cont % 2 == 0){
                printf("%c",a);
                printf("%c",a);
            }
            else{
                printf("%c",b);
                printf("%c",b); 
            }
            cont++;
        }
        printf("\n");
    }
    
}

int main(){
    int n = 3;
    char a = 'o';
    char b = 'x';

    stampa(n,a,b);
}
