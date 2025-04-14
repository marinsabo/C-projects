#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    printf("%d", (a + b) > c && (a + c) > b && (b + c) > a);

    return 0;
}
