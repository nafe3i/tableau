#include <stdio.h>
long long fibonacci (int n){

    if (n==0)
    {
        return 0 ;
    }
    else if (n==1)
    {
        return 1 ;
    }

    int a = 0 , b = 1 ,c , i ;
        for ( i = 2;i <n; i++)
    {
        c = a + b ;
        a =b ;
        b = c ;
    }
    
        return c ;
}

    
    

int main (){
    int n ;
    printf("donner le nombre que vous voulez :\n");
    scanf("%d",&n);

    int fibo=fibonacci(n);
    printf("le nombre est : %lld " ,fibo);

    return 0;

}