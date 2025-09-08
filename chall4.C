#include <stdio.h>
int main(){
    int taille , i , max;

    printf("donner la taille de tableau : \n ");
    scanf("%d",&taille);        
    int t [taille];
    for(i = 0; i < taille; i++)
    {
        printf("donner la valeur  %d : \n",i+1);
        scanf("%d",&t[i]);
    }

    max = t[0];
    for(i = 1; i < taille; i++)
    {
        if(t[i] > max)
        {
            max = t[i];
        }
    }
    printf("la valeur maximale du tableau est : %d \n",max);
    return 0;
}