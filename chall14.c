#include <stdio.h>
int main() {
    int taille , i , moyenne , somme = 0;

    printf("Donner la taille du tableau : \n");
    scanf("%d", &taille);
    int t[taille];
    for (i = 0 ; i < taille ; i++){ 
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }

    for (i = 0; i < taille; i++)
    {
        somme = somme + t[i];
    }

    moyenne = somme / taille;
    printf("La moyenne des valeurs du tableau est : %d\n", moyenne);

    return 0;
}