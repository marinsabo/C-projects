#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    float pi = 3.14;

    scanf("%f", &r);
    printf("Opseg kruga: %.3f", 2 * r * pi);
    printf("\nPovršina kruga: %.3f", pow(r, 2) * pi);

    return 0;
}
