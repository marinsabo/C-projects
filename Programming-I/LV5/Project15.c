#include <stdio.h>


int jeProst(int broj) {
    if (broj < 2) {
        return 0;
    }

    for (int i = 2; i < broj; i++) {
        if (broj % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int polje[10];
    int brojProstih = 0;

    printf("Unesite 10 cijelih brojeva:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &polje[i]);
    }

    printf("\nProsti brojevi u polju:\n");
    for (int i = 0; i < 10; i++) {
        if (jeProst(polje[i])) {
            printf("%d ", polje[i]);
            brojProstih++;
        }
    }

    printf("\nUkupno prostih brojeva: %d\n", brojProstih);

    return 0;
}

