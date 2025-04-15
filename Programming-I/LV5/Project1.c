#include <stdio.h>
#include <float.h>

int main() {

    float polje[10];
    float min = FLT_MAX, max = -FLT_MAX;

    for (int i = 0; i < 10; i++) {

        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);

        if (polje[i] > max) {
            max = polje[i];
        }
        if (polje[i] < min) {
            min = polje[i];
        }
    }

    if (min == max) {
        printf("\nJedinstvena vrijednost u polju: %.2f", min);
    }
    else {
        printf("\nNajveæi element polja: %.2f\nNajmanji element polja: %.2f", max, min);
    }

    return 0;
}
