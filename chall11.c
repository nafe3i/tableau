#include <stdio.h>
int main() {
    int taille , i , a, n ;

    printf("Donner la taille du tableau : \n");
    scanf("%d", &taille);
    int t[taille];
    for (i = 0 ; i < taille ; i++){ 
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }       
    printf("entrer le nombre que vous voulez changer : \n");
    scanf("%d", &a);

    printf("entrer le nouveau nombre : \n");
    scanf("%d", &n);
   for (i = 0; i < taille; i++) {
       if (t[i] == a) {
           t[i] = n;
       }
   }
    printf("Tableau modifié :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    return 0;
}