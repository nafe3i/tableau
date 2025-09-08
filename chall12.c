#include <stdio.h>
int main() {
    int taille , i ;

    printf("Donner la taille du tableau : \n");
    scanf("%d", &taille);
    int t[taille];
    for (i = 0 ; i < taille ; i++){ 
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }

    for (i = 0; i < taille; i++)
    {
        if (t[i] % 2 == 0)
        {
            printf("Les nombres pairs dans le tableau sont : \n");
            printf("%d ", t[i]);
        }
        
    }
    return 0;  
}