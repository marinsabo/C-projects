#include <stdio.h>
#include <stdlib.h>

int funkcija(int n) {

    n = abs(n);
    int z;
    int umnozak = 1;
    int fakt = 0;

    for (int i = 0; n > 0; i++) {

        umnozak = 1;
        z = n % 10;
        n = n / 10;

        for (int j = 1; j <= z; j++) {
            umnozak = umnozak * j;
        }

        fakt += umnozak;
    }

    return fakt;
}

int main() {
    int n, fakt, z;
    int umnozak = 1;

    scanf("%d", &n);

    fakt = funkcija(n);

    printf("Zbroj faktorijela znamenaka Vašeg broja je %d", fakt);

    return 0;
}
