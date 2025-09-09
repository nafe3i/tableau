#include <stdio.h>
int main(){
    char mot1[20] , mot2[20] ;

    printf("donner les deux mots :\n");
    fgets(mot1,sizeof(mot1),stdin);
    fgets(mot2,sizeof(mot2),stdin);

    char mot3 [40] ;
    int i =0;
    while (mot1[i] != '\0')
    {
        mot3[i]=mot1[i];
        i++;
    }
    int j = 0 ;
    while (mot2[j] != '\0')
    {
        mot3[i] = mot2[j];
        i++;
        j++;
    }
    printf("le mot composer est : %s", mot3);
    return 0;


}