#include<stdio.h>
int main(){
    char mot[20];
    printf("entrer le mot :");
    fgets(mot,sizeof(mot),stdin);
    int d = 0;
    while (mot[d] != '\0'){
        d++;
    }
    printf(" %d",d-1);
    return 0;
}