#include <stdio.h>
#include <float.h>

int main() {

    int m, n;
    float arit = 0;

    do {

        scanf("%d %d", &m, &n);

    } while ((m < 3 || m>12) && (n < 2 || n>14));

    float matrica[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {


            scanf("%f", &matrica[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            printf("%.2f ", matrica[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    for (int j = 0; j < n; j++) {
        arit = 0;
        for (int i = 0; i < m; i++) {

            arit += matrica[i][j];

        }

        arit = arit / n;
        printf("Arit. %d. stupca je %.2f", j + 1, arit);
        printf("\n");
    }

    return 0;
}


