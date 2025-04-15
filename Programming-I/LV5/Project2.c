#include <stdio.h>
#include <math.h>

int main() {

    float polje[12];
    float arit = 0;

    for (int i = 0; i < 12; i++) {
        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);

        arit += fabs(polje[i]);
    }

    arit = arit / 12;

    for (int i = 0; i < 12; i++) {
        if (polje[i] > 0) {
            polje[i] = arit;
        }
    }

    printf("\nIzmjereno polje: \n");
    for (int i = 0; i < 12; i++) {
        printf("%d. element: %.2f\n", i + 1, polje[i]);
    }

    return 0;
}