#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    long long a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int f;
    printf("Donnez le rang de Fibonacci que vous voulez :\n");
    scanf("%d", &f);

    if (f < 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1;
    }

    long long fibo = fibonacci(f);
    printf("Le terme de Fibonacci à la position %d est : %lld\n", f, fibo);

    return 0;
}
