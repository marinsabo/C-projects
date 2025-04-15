#include <stdio.h>

int main() {

    int polje[20];

    for (int i = 0; i < 20; i++) {
        do {
            printf("\nUnesite %d. element polja [0,9]: ", i + 1);
            scanf("%d", &polje[i]);
        } while (polje[i] < 0 || polje[i] > 9);
    }

    for (int i = 0; i < 20; i++) {
        int c = 0;
        int isProcessed = 0;

        for (int j = 0; j < i; j++) {
            if (polje[i] == polje[j]) {
                isProcessed = 1;
                break;
            }
        }

        if (isProcessed == 0) {
            for (int j = 0; j < 20; j++) {
                if (polje[i] == polje[j]) {
                    c++;
                }
            }
            printf("\nBroj %d se ponavlja %d puta.", polje[i], c);
        }
    }

    return 0;
}
