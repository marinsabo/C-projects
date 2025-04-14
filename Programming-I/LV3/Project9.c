#include <stdio.h>

int main()
{
    int n, c = 0;
    float art = 0;

    for (int i = 100; i < 1000; i++) {

        n = i % 10;
        if (n % 3 == 0 && n != 0) {
            printf("\n%d", i);

            art += i;
            c++;
        }
    }

    art = art / c;

    printf("\nAritmetièka sredina je %.2f", art);

    return 0;
}

