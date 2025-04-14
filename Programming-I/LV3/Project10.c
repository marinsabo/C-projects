#include <stdio.h>

int main()
{
    char n;
    int c = 0;

    while (n != 'q') {

        scanf(" %c", &n);
        c++;

    }

    printf("\nPrije unosa znaka q, uneli ste %d znakova.", c - 1);

    return 0;
}


