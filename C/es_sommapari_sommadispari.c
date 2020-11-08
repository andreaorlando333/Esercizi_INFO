
// Andrea Orlando - 4BROB 

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int leggi(int vettore[MAX])
{

	int n

	do{
		printf("\n");
		printf("Inserire il numero di elementi: ");
		scanf("%d", &n);

	} while(n<0);

	for(int a = 0; a < = n; a++){

		printf("Inserire l'elemento": );
		scanf("%d", &vet[a]);
	}

	return n;
}

int sommaPari(n, *vet)
{
	int sommaP = 0;
	for(int k=0; k<=n; k++){

			if(a%2==0){
				sommaP = sommaP+vet[a];
			}
	}
	return sommaP;
}

int sommaDispari(n, *vet)
{
	int sommaD = 0;
	for(int k=0; k<=n; k++){

			if(a%2==0){
				
			}else{
				sommaD = sommaD+vet[a];
			}
	}
	return sommaD;
}


int main()
{	

	int vettore[MAX];
	int n;
	int sommaP, sommaD;

	n = leggi(*vet);
	sommaP = sommaPari(n, *vet);
	sommaD = sommaDispari(n, *vet);

	printf("\nSomma dei valori in posizione pari: %d", sommaP);
	printf("\nSomma dei valori in posizione dispari: %d", sommaD);
	printf("\n\n");
	
	return 0;

}
