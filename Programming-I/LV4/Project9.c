#include <stdio.h>
#include <stdlib.h>

int funkcija(int n) {
    int binarni = 0;
    int i = 1;

    while (n > 0) {
        binarni += (n % 2) * i;
        n = n / 2;
        i *= 10;
    }

    return binarni;
}

int main() {
    int n, binarno;

    scanf("%d", &n);

    binarno = funkcija(n);

    printf("%d(10) = %d(2)\n", n, binarno);

    return 0;
}
