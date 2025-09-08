#include <stdio.h>
int main(){
    int taille , i ;
    printf("donner la taille du tableau : ");
    scanf("%d",&taille);
    int t[taille];
    for(i=0;i<taille;i++){
        printf("donner la valeur %d : ",i+1);
        scanf("%d",&t[i]);
    }
    printf("les valeurs du tableau sont : \n");
    for(i=0;i<taille;i++){
        printf("%d \n",t[i]);
    }
    return 0;
}