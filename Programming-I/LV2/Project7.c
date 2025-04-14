#include <stdio.h>

int main()
{
    int x, g, d, t;

    scanf("%d", &x);

    g = x / 365;
    t = (x % 365) / 7;
    d = x - (g * 365 + t * 7);

    printf("Broj godina: %d", g);
    printf("\nBroj tjedana: %d", t);
    printf("\nBroj dana: %d", d);

    return 0;
}
