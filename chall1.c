#include <stdio.h>
int main() {
    char mot[20];
    printf("entrer le mot :");
    fgets(mot, sizeof(mot), stdin);
    printf("Vous avez entrer : %s", mot);
    return 0;
}