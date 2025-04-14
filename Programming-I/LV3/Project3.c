#include <stdio.h>

int main()
{
    int n;

    do {

        scanf("%d", &n);

    } while (n <= 0);

    for (int i = 0; n > 0; i++) {

        printf("%d", n % 10);
        n = n / 10;

        if (n != 0) {
            printf("__");
        }

    }

    return 0;
}

