#include <stdio.h>
int main (){
    int taille , i , somme ;

    printf("donner la taille de tableau : \n ");
    scanf("%d",&taille);

    int t [taille];
    for ( i = 0; i < taille; i++)
    {
        printf("donner la valeur  %d : \n",i+1);
        scanf("%d",&t[i]);
    }

    for( i = 0; i < taille; i++)
    {
    
        somme = somme + t[i];
    }
    printf("la somme des valeurs du tableau est : %d \n",somme);
    return 0;
    

    


}