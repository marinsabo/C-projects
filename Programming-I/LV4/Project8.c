#include <stdio.h>
#include <stdlib.h>

int funkcija(int n) {
    int zbroj = 0;
    n = abs(n);

    for (int j = 0; j < 3; j++) {
        zbroj = 0;
        while (n > 0) {
            zbroj += n % 10;
            n = n / 10;
        }
        n = zbroj;
        if (n < 10) break;
    }

    return n;
}

int main() {
    int n, zbroj;

    scanf("%d", &n);

    zbroj = funkcija(n);

    printf("%d", zbroj);

    return 0;
}
