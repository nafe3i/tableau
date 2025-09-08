#include <stdio.h>
int main() {
    int taille , i , tailles;

    printf("Donner la taille du premier tableau : \n");
    scanf("%d", &taille);
    int t[taille];
    for (i = 0 ; i < taille ; i++){ 
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }
    printf("Donner la taille du deuxieme tableau : \n");
    scanf("%d", &tailles); 
    int f[tailles];
    for (i = 0 ; i < tailles ; i++){ 
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &f[i]);
    }   

    printf("les tableaux fusionner sont : \n");
    int fusion[taille + tailles];
    for (i = 0; i < taille; i++) {
        fusion[i] = t[i];
    }
    for (i = 0; i < tailles; i++) {
        fusion[taille + i] = f[i];
    }
    for (i = 0; i < taille + tailles; i++) {
        printf("%d \n", fusion[i]);
    }
    return 0;
}