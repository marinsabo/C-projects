#include <stdio.h>

int main() {
    float x;
    int n;

    do {
        printf("Unesite dimenziju kvadratne matrice [3,8]: ");
        scanf("%d", &n);
    } while (n < 3 || n > 8);

    do {
        printf("Unesite vrijednost realnog broja x (0 < x ≤ 1): ");
        scanf("%f", &x);
    } while (x <= 0 || x > 1);

    float polje[n][n];

    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &polje[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        polje[i][n - 1 - i] *= x;
    }

    printf("\nIzmijenjena matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}