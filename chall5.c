#include <stdio.h>
#include <string.h>
int main(){
    char mot[20] ;
    printf("entrer le mot :");
    fgets(mot,sizeof(mot),stdin);
    int i ;
    int len = strlen(mot);

    for ( i = len-1; i >= 0; i--)
    {
       printf("%c", mot[i]);
       
    }
    

    return 0;
}