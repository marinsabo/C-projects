#include <stdio.h>
#include <float.h>

int main()
{
    int n;
    float xmin = FLT_MAX;
    float xmax = -FLT_MAX;

    do {

        scanf("%d", &n);

    } while (n < 6 || n>15);

    float polje[n];

    for (int i = 0; i < n; i++) {

        printf("\nUnesite %d. element polja: ", i + 1);
        scanf("%f", &polje[i]);

        if (polje[i] < xmin) {

            xmin = polje[i];

        }
        if (polje[i] > xmax) {

            xmax = polje[i];

        }

    }

    printf("\nIspis polja: \n");
    for (int i = 0; i < n; i++) {

        printf("%.2f ", polje[i]);

    }

    printf("\nNormalizacija polja: \n");
    for (int i = 0; i < n; i++) {

        polje[i] = (polje[i] - xmin) / (xmax - xmin);
        printf("%.2f ", polje[i]);

    }

    return 0;
}
