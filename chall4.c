#include<stdio.h>
int main(){
    char mot1 [20],mot2[20];
    int i=0 ;

    printf("donner les deux mots :\n");
    fgets(mot1,sizeof(mot1),stdin);
    fgets(mot2,sizeof(mot2),stdin);

    while (mot1[i]!='\0' || mot2[i]!='\0'){

        if (mot1[i]==mot2[i])
        {
            printf("sont identiques");
        }
        else
        {
            printf("ne sont pas identiques");
        }
        
        break;

    }
    
    
   return 0 ; 
}
