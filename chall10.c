#include <stdio.h>
int main() {
    int taille , i , a;

    printf("Donner la taille du tableau : \n");
    scanf("%d", &taille);

    

    int t[taille];
    for (i = 0 ; i < taille ; i++){
        printf("donner la valeur %d :\n", i + 1);
        scanf("%d", &t[i]);
    }
    printf("donner le nombtre que vous chercher : \n");
    scanf("%d", &a);

    for (i = 0; i < taille; i++)
    {
        if (t[i] == a)
        {
            printf("Nombre %d trouvé à  %d\n", a, i);
            break;
        } 
    }
    printf("le nombre %d n'est pas trouvé \n", a);
    
      
    return 0;  
}