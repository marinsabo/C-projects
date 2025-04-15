#include <stdio.h>
#include <stdlib.h>

int prva_znamenka(int n) {
    n = abs(n);
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int x, y;

    do {
        printf("Unesite dva razlièita broja: ");
        scanf("%d %d", &x, &y);
    } while (x == y);

    int px = prva_znamenka(x);
    int py = prva_znamenka(y);

    if (px > py) {
        printf("Broj %d ima veæu prvu znamenku (%d).\n", x, px);
    }
    else if (py > px) {
        printf("Broj %d ima veæu prvu znamenku (%d).\n", y, py);
    }
    else {
        printf("Oba broja imaju istu prvu znamenku (%d).\n", px);
    }

    return 0;
}