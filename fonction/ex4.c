#include <stdio.h>
int mi(int a , int b ){
    if (a>b)
    {
        return b;
    }
    else
    {
        return a;
    }   
}
int main(){
    int a , b ;
    printf("donner les deux nombres :\n");
    scanf("%d %d",&a,&b);

    int max=mi(a,b);
    printf("le m est %d",max);

    return 0 ;
    
}