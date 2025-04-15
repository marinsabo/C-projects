#include <stdio.h>

int main() {

    int m;

    do {
        printf("\nUnesite dimenziju kvadratne matrice [4,12]: ");
        scanf("%d", &m);
    } while (m < 4 || m > 12);

    float matrica[m][m];

    printf("\nUnesite elemente matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%f", &matrica[i][j]);
        }
    }

    printf("\nPozitivni elementi ispod sporedne dijagonale: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {

            if (i + j > m - 1 && matrica[i][j] > 0) {
                printf("%.2f ", matrica[i][j]);
            }
        }
    }

    printf("\nPozitivni elementi iznad glavne dijagonale: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {

            if (i < j && matrica[i][j] > 0) {
                printf("%.2f ", matrica[i][j]);
            }
        }
    }

    return 0;
}

