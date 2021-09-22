#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void verifica(float lati[]){
    if(lati[1]<lati[2]+lati[0] && lati[0]<lati[1]+lati[2] && lati[2]<lati[1]+lati[0]  ){
        printf("\ne' un triangolo");
    }
    else{
        printf("\nnon puo' esistere come triangolo");
    }
    
    
}

int main(){
    float lati[3];

    for(int i = 0;i<3;i++){
        printf("\ninserie il lato numnero %d:  ",i+1);
        scanf("%f",&lati[i]);
    }

    verifica(lati);

    
}