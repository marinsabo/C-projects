#include <stdio.h>

int main()
{
    int n;
    float postotak;
    int p = 0, np = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            p++;
        }
        else {
            np++;
        }
    }

    postotak = (p / 10.0) * 100;
    printf("\nPostotak parnih brojeva je %.2f posto", postotak);

    return 0;
}

