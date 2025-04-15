#include <stdio.h>
#include <float.h>

int main() {

    int m;

    do {
        printf("Unesite dimenziju kvadratne matrice m [3,15]: ");
        scanf("%d", &m);
    } while (m <= 3 || m >= 16);

    float matrica[m][m];
    float max = -FLT_MAX;
    float min = FLT_MAX;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%f", &matrica[i][j]);
        }
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (matrica[i][j] < min) {
                min = matrica[i][j];
            }
        }
    }

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (matrica[i][j] > max) {
                max = matrica[i][j];
            }
        }
    }

    printf("\nNajmanji element iznad sporedne dijagonale je %.2f", min);
    printf("\nNajveæi element ispod glavne dijagonale je %.2f", max);

    return 0;
}
