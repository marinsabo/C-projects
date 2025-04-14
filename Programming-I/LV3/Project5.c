#include <stdio.h>

int main()
{
    char a, b, c;
    char min;

    scanf(" %c %c %c", &a, &b, &c);

    if (a < b && a < c) {
        min = a;
        printf("\n%x", b - min);
        printf("\n%x", c - min);
    }
    else if (b < a && b < c) {
        min = b;
        printf("\n%x", a - min);
        printf("\n%x", c - min);
    }
    else {
        min = c;
        printf("\n%x", a - min);
        printf("\n%x", b - min);
    }

    return 0;
}

