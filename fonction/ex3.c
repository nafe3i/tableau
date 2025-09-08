#include <stdio.h>
int maximum(int a , int b ){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
    
}
int main(){
    int a , b ;
    printf("donner les deux nombres :\n");
    scanf("%d %d",a,b);

    int max=maximum(a,b);
    printf("le maximum est %d",max);
    
}