#include <stdio.h>
int main(){
    int taille , i , min;

    printf("donner la taille de tableau : \n ");
    scanf("%d",&taille);        
    int t [taille];
    for(i = 0; i < taille; i++)
    {
        printf("donner la valeur  %d : \n",i+1);
        scanf("%d",&t[i]);
    }

    min = t[0];
    for(i = 1; i < taille; i++)
    {
        if(t[i] < min)
        {
            min = t[i];
        }
    }
    printf("la valeur minimale du tableau est : %d \n",min);
    return 0;
}