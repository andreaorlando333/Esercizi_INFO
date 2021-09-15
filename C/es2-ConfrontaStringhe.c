

// scrivi una funzione che ritorna "1" se due stringhe sono identiche
// oppure un numero che indica quanti caratteri consecutivi sono uguali.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string1[60];
char string2[60];

int main(){

	printf("\nInserisci la stringa 1: ");
	scanf("%s", &string1);
	printf("\nInserisci la stringa 2: ");
	scanf("%s", &string2);
	confronta();
	printf("\nprogramma terminato.\n");


}

int confronta(){

	int CaratteriConsecutivi = 0;
	int counter = 1;
	int set = 0;
	int out = 0;
	int out2 = 0;
	int lung = 0;

	out = strcmp(string1, string2);
	if(out == 0){
		printf("\nLe due stringhe sono uguali.");
		return 0;
	} else {
		if(out>0){
			lung = strlen(string1);
		} else if (out < 0) {
			lung = strlen(string2);
		}

		do {
   			out2 = strncmp(string1, string2, counter);
			if(out2 == 0){
			  CaratteriConsecutivi = CaratteriConsecutivi + 1;
			  set = 1;		  
			}else{
				set = 0;		
			}
			counter++;

		} while (set == 1);

	printf("\nLe stringhe non sono uguali.");
	printf("\nCaratteri consecutivi: %d", CaratteriConsecutivi);

	return CaratteriConsecutivi;
			
	}
		
}





