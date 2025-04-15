#include <stdio.h>
#include <float.h>

int main() {

    int n, c;
    float arit = 0;

    do {

        scanf("%d", &n);

    } while (n < 3 || n>12);

    float polje[n];
    c = 0;

    for (int i = 0; i < n; i++) {

        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);

        if (polje[i] > 0) {
            arit += polje[i];
            c++;
        }
    }

    if (c > 0) {
        arit = arit / c;
    }
    else {
        printf("Nema pozitivnih brojeva.\n");
        return 0;
    }

    printf("\nIzmijenjeno polje: \n");
    for (int i = 0; i < n; i++) {

        if (polje[i] < arit) {
            polje[i] = arit;
        }

        printf("%.2f ", polje[i]);
    }

    return 0;
}
