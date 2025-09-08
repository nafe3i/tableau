#include <stdio.h>
int main() {
    int taille , i , j;

    printf("Donner la taille du tableau : \n");
    scanf("%d", &taille);

    int t[taille];
    for (i = 0 ; i < taille ; i++){
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }

    for (i = 0 ; i < taille ; i++){
        for (j = i + 1 ; j < taille ; j++){
            if (t[i] > t[j]){
                int a = t[i];
                t[i] = t[j];
                t[j] = a;
            }
        }
    }

    printf("le tableau avec l'ordre croissant : \n");
    for (i = 0; i < taille; i++) {
        printf("%d \n", t[i]);
    }

    return 0;  
}
