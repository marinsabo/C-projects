#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a) {

        if (a == b && b == c) {
            printf("\nVa� trokut je jednakostrani�an.");
        }
        else if ((a == b && b != c) || ((a == c) && c != b) || ((b == c) && c != a)) {
            printf("\nVa� trokut je jednakokra�an.");
        }
        else {
            printf("\nVa� trokut je raznostrani�an.");
        }

    }
    else {

        printf("\nNe postoji trokut sa zadanim stranicama.");

    }

    return 0;
}

