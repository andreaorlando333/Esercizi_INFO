
// Dati due vettori interi di dimensione N, costruire un 
// terzo vettore di dimensione 2N in cui:
// pari ---> 1 vettore
// dispari ---> 2 vettore

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int vettore_tre[100];
    int vettore_uno[100];
    int vettore_due[100];
    int temp;
    printf("inserire la dimenzione desisderata: ");
    scanf("%d",&n);
    printf("il numero  è %d",n);

    prinf("inserire i valori del primo vettore: ")
    int i;
    for( i = 0 ; i<n;i++){
        printf("inserire il volore numero %d",i);
        scanf("%d"&temp);
        vettore_uno[i]=temp;

    }
    prinf("inserire i valori del secondo vettore: ")
    int j;
    for( j = 0 ; j<n;j++){
        printf("inserire il volore numero %d",j);
        scanf("%d"&temp);
        vettore_due[j]=temp;

    }
    int d=0;
    for(int a = 0;a<2*n;a++){
        if(a%2 == 0){
            vettore_tre[a]=vettore_uno[d]
            d = d+1;
        }
        else{
            vettore_tre[a]=vettore_uno[d]
            d = d+1;
        }
    }

    for(int l = 0;l<2*n;l++){
    	if(vettore_tre[1]%2==0){
    		vettore_par[b]=vettore_tre[1];
    		b++;
    	}else{
    		vettore_dis[c]=vettore_tre[1];
    		c++;
    	}
       
    }

    
    

    return 0;
    
}
