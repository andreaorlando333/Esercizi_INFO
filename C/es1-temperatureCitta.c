
// calcolare la temperatura media di di due città 
// prelevando le diverse temperature nelle relative ore 
// elabora una soluzione dove un sottoprogramma acquisisce i dati 
// e li memorizza nelle variabili globali mentre 
// un altro sottoprogramma ne calcola le medie.

#include <stdio.h>
#include <string.h>

int sommaCitta1;
int sommaCitta2;
int counter1;
int counter2;

int main(){

    int tMax, tMin; 
    int tempCitta1, tempCitta2;
    int media;
    char nomeCittaMax [30];
    char nomeCittaMin[30];
    char risposta; 
    float mediaCuneo, mediaTorino;

    printf("\nProgramma per la media di temperature.\n");
    acquisisci();

    // calcolo medie
    mediaCuneo = sommaCitta1 / counter1;
    mediaTorino = sommaCitta2 / counter2;
    printf("\nMedia di Cuneo:  %f", mediaCuneo);
    printf("\nMedia di Torino: %f", mediaTorino);
    printf("\n\n");
    return 0;


  
}

// funzione per memorizzare nelle variabili globali
void acquisisci(){

    int tMax, tMin; 
    int tempCitta1, tempCitta2;
    int media;
    char nomeCittaMax [30];
    char nomeCittaMin[30];
    char risposta; 
    counter1 = 0;
    counter2 = 0;
  
    do {

        //acquisiszione dati
        printf("\nInserisci temperatura per Cuneo: ");
        scanf("%d",&tempCitta1);
        counter1 = counter1 + 1;
        sommaCitta1 = sommaCitta1 + tempCitta1; // aggiorno somma

        printf("\nInserisci temperatura per Torino: ");
        scanf("%d",&tempCitta2);
        counter2 = counter2 + 1;
        sommaCitta2 = sommaCitta2 + tempCitta2; // aggiorno somma
    
        printf("\nContinuare?[s/n]");
        scanf("\n%c",&risposta);

    } while ((risposta == 's') || (risposta =='S'));


}



