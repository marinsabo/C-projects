#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 1000;
    double b = 10.5;
    float c = 2.0F;
    char d = 'A';

    printf("%d zauzima %zu bajta\n", a, sizeof(a));
    printf("%lf zauzima %zu bajta\n", b, sizeof(b));
    printf("%f zauzima %zu bajta\n", c, sizeof(c));
    printf("%c zauzima %zu bajta\n", d, sizeof(d));

    return 0;
}
