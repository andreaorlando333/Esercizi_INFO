
// Andrea Orlando - 4BROB 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char duplicaVocali(char s[MAX], num)
{
	int k=0;
	int i=0;

	char stringa[MAX];

	while(s[k] != "\0")
	{
		if(s[i]=="a"){	
			stringa[i] = s[k];
			stringa[k+1] = s[k];
			i++;
		} else if(s[i]=="e"){
			stringa[i] = s[k];
			stringa[k+1] = s[k];
			i++;
		} else if(s[i] == "i"){
			stringa[i] = s[k];
			stringa[k+1] = s[k];
			i++;
		} else if(s[i] == "o"){
			stringa[i] = s[k];
			stringa[k+1] = s[k];
			i++;
		} else if(s[i]=="u"){
			stringa[i] = s[k];
			stringa[k+1] = s[k];
			i++;
		}else{

			stringa[i] = s[k];
		}
	

		k++;
		i++;
	}

	return stringa;
}

void stampa(int n, *stringa)
{
	for(int k=0:k<n;k++){
		printf("%c ",stringa[k]);
	}
}


int main()
{

	char s[MAX];
	int num;

	printf("\nInserire la stringa: ");
	scanf("%s", &s);

	num = strlen(s);
	stringa[MAX] = duplicaVocali(s[MAX]);


	return 0;
}