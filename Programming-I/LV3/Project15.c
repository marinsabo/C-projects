#include <stdio.h>

int main() {
    int n;

    do {
        printf("Unesite broj n veæi od 100: ");
        scanf("%d", &n);
    } while (n <= 100);

    printf("Prosti brojevi u intervalu [2, %d] su:\n", n);

    for (int i = 2; i <= n; i++) {
        int prost = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prost = 0;
                break;
            }
        }

        if (prost) {
            printf("%d ", i);
        }
    }

    return 0;
}



