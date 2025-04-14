#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a) {

        if (a == b && b == c) {
            printf("\nVaš trokut je jednakostranièan.");
        }
        else if ((a == b && b != c) || ((a == c) && c != b) || ((b == c) && c != a)) {
            printf("\nVaš trokut je jednakokraèan.");
        }
        else {
            printf("\nVaš trokut je raznostranièan.");
        }

    }
    else {

        printf("\nNe postoji trokut sa zadanim stranicama.");

    }

    return 0;
}

