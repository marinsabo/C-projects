#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y;

    scanf("%f %f %f", &x1, &x2, &x3);

    y = pow(x1, 2) + 10 * x2 - (pow(x3, 2) / 2);

    printf("y = %f", y);

    return 0;
}
