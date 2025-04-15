#include <stdio.h>

int main()
{
    int n;
    float arit = 0;
    int c = 0;

    do {
        scanf("%d", &n);
    } while ((n < 3 || n > 15) || n % 2 == 0);

    float matrica[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrica[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i != n / 2 || j != n / 2) {
                arit += matrica[i][j];
                c++;
            }
        }
    }

    arit = arit / c;
    matrica[n / 2][n / 2] = arit;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
