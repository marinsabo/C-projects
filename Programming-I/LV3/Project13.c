#include <stdio.h>

int main()
{
    int n;
    int c = 0;
    int max = 0;
    int max2 = 0;

    do {
        scanf("%d", &n);
    } while (n <= 2);

    for (int i = 1; i < n; i++) {
        c = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
                if (c > max) {

                    max = i;
                    max2 = c;

                }
            }
        }
    }

    printf("Broj: %d, Broj djelitelja: %d", max, max2);

    return 0;
}


