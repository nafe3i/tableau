#include <stdio.h>
long long factorielle (int n){
    long long fac=1;
    for(int i = 1; i <= n; i++){
        fac=fac*i;
    }
    return fac;
}
int main (){
    int n ;
    printf("donner le nombre : \n");
    scanf("%d",&n);

    long long facc=factorielle(n);
    printf("la factorielle est %lld\n",facc);
    return 0 ;
}