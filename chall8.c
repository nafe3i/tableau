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

    int f[taille];
    i = 0 ;
    while (i < taille)
    {
        f[i] = t[i] ;
        i++;
    }
    printf("le premier tableeau est : \n");
    for (i = 0; i < taille; i++) {
        printf("%d \n", t[i]);      
    }
    printf("le deuxieme tableau est : \n");
    for (i = 0; i < taille; i++) {
        printf("%d \n", f[i]);
    }
    return 0;
}
