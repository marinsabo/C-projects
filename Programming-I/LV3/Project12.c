#include <stdio.h>

int main()
{
    int bodovi;
    float postotak;
    const float udio_boda = 20.0 / 28.0;

    do {
        scanf("%d", &bodovi);
    } while (bodovi < 0 || bodovi > 28);

    postotak = bodovi * udio_boda;

    printf("\nRadom na vježbama skupili ste %.2f%% ukupne ocjene.\n", postotak);

    return 0;
}


