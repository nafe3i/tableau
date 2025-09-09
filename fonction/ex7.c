#include <stdio.h>
#include <string.h>

/*int lataille(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}*/
void inverser_chaine(char str[])
{
    int debut = 0;
    int fin = strlen(str) - 1;
    while (debut < fin) {
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
}
int main() {
  char str [20];
  printf("Donnez une chaine de caractere :\n");
  scanf("%s", str);
  inverser_chaine(str);
  printf("Chaine inverse : %s\n", str);
  return 0;
}