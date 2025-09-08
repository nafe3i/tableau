#include <stdio.h>
int addition(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &a, &b);
    int somme = addition(a, b);
    printf("La somme est: %d\n", somme);
    return 0;
}