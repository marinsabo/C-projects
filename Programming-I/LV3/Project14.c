#include <stdio.h>

int main()
{
    float n;
    float max = -101;
    int c = 0;

    for (int i = 0; i < 5; i++) {

        do {
            scanf("%f", &n);
        } while (n < -100 || n>50);

        if (n > max) {
            max = n;
        }
    }

    printf("\nNajveæi broj od 5 unosa je %.2f", max);

    return 0;
}


