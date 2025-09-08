#include <stdio.h>

int main() {
    int taille, i, facteur;

    printf("donner la taille du tableau : \n");
    scanf("%d", &taille);

    int t[taille];

    for (i = 0; i < taille; i++) {
        printf("donner la valeur %d : \n", i + 1);
        scanf("%d", &t[i]);
    }

    printf("donner le facteur de multiplication : \n");
    scanf("%d", &facteur);

    printf("Les valeurs du tableau apres multiplication sont : \n");
    for (i = 0; i < taille; i++) {
        int resultat = t[i] * facteur;
        printf("La valeur %d * %d = %d\n", t[i], facteur, resultat);
    }

    return 0;
}
