
// Andrea Orlando - 4B ROB

#include <stdio.h>
#include <string.h>

void inverti(char *stringa)
{
    int k,j;
    int n = strlen(stringa);

    for (k=0,j=n-1;i<n/2;i++,j--)
    {
        char s = stringa[k];
        stringa[k]=stringa[j];
        stringa[j]=s;
    }
}

int main()
{
  char stringa[MAX];

    
  printf("\n");
  printf("Inserire la stringa: ");
  scanf("%s",&stringa);
  inverti(stringa);
  printf("%s",stringa);

  return 0;  
}