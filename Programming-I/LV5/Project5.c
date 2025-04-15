#include <stdio.h>

int main() {

    int q;

    do {
        printf("Unesite dimenziju polja q [6,12]: ");
        scanf("%d", &q);
    } while (q < 6 || q > 12);

    float polje[q];

    for (int i = 0; i < q; i++) {

        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);

        if (i % 2 == 0) {

            polje[i] = polje[i] / 10;

        }
        else {

            polje[i] = polje[i] / (-10);

        }

    }

    printf("\nIzmijenjeno polje: ");
    for (int i = 0; i < q; i++) {

        printf("\n%.2f ", polje[i]);

    }


    return 0;
}
