#include <stdio.h>
#include <float.h>

int main() {

    int m, n;
    float arit;

    do {
        scanf("%d %d", &m, &n);
    } while ((m < 2 || m > 11) || (n < 5 || n > 10));

    float matrica[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Unesite element matrice[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrica[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        arit = 0;
        for (int j = 0; j < n; j++) {
            arit += matrica[i][j];
        }

        arit = arit / n;
        printf("Aritmetièka sredina %d. retka je: %.2f\n", i + 1, arit);
    }

    return 0;
}

