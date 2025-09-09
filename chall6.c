#include<stdio.h>
#include <string.h>

int main(){
    char mot[20], n[2];
    int i ;

    printf("entrer le mot :");
    fgets(mot,sizeof(mot),stdin);

    printf("entrer le caractere :");
    scanf("%c",&n);

    int nbr=0;

    for ( i = 0; mot[i] != '\0'; i++)
    {

        if(mot[i]==n)
        {
            nbr++;
        }
        
    }
    if (nbr > 0)
    {
        printf("le caractere %c existe son nombre est : %d\n",n[0],nbr);
    }
    
    else
    {
        printf("le caractere %c n'existe pas\n",n);
    }


    

    return 0;
}