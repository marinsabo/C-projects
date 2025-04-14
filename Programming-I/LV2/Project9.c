#include <stdio.h>

int main()
{
    float a, b, x;

    scanf("%f %f", &a, &b);
    printf("Prije zamjene: %.2f %.2f", a, b);

    x = a;
    a = b;
    b = x;

    printf("\nPoslije zamjene: %.2f %.2f", a, b);

    return 0;
}
