#include <stdio.h>

int main()
{
    float n;
    float min, max;

    scanf("%f", &n);
    min = n;
    max = n;

    for (int i = 0; i < 9; i++) {
        scanf("%f", &n);

        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }

    printf("\nMin: %.2f, Max: %.2f", min, max);
    return 0;
}


