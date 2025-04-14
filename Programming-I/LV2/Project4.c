#include <stdio.h>
#include <math.h>

int main()
{
    float x, alpha;

    scanf("%f %f", &x, &alpha);
    printf("%d", fabs(x) <= alpha);

    return 0;
}
