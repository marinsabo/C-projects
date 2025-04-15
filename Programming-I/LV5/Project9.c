#include <stdio.h>
#include <float.h>

int main() {

    int n;

    do {
        printf("Unesite broj elemenata u polju (3 < n < 13): ");
        scanf("%d", &n);
    } while (n < 4 || n > 12);

    float polje[n];

    for (int i = 0; i < n; i++) {
        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (polje[i] < polje[minIndex]) {
            minIndex = i;
        }
        if (polje[i] > polje[maxIndex]) {
            maxIndex = i;
        }
    }

    float temp = polje[minIndex];
    polje[minIndex] = polje[maxIndex];
    polje[maxIndex] = temp;

    printf("\nIzmijenjeno polje: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", polje[i]);
    }

    return 0;
}

