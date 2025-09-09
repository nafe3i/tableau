#include<stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char mot[20] ;
    int i ;
    printf("entrer le mot :"); 
    fgets(mot,sizeof(mot),stdin);
    int tail=strlen(mot);
    for (i = 0; i < tail; i++) {
        mot[i] = toupper(mot[i]);
    }
    printf("le mot en majuscule est : %s",mot);
    return 0;
}
