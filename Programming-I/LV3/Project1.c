#include <stdio.h>

int main()
{
    int n;

    printf("Unesite cijeli broj iz intervala [5,25]: ");
    scanf("%d", &n);
    if ((n < 5) || (n > 25)) {

        printf("\nNiste uneli broj iz zadanog intervala.");
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

