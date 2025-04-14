#include <stdio.h>

int main()
{
    char ocjena = ' ';
    int x = 0;

    while (ocjena != '!') {
        scanf(" %c", &ocjena);

        switch (ocjena) {
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            x++;
            break;
        }
    }

    printf("Uneseno je %d ocjena od A do F\n", x);

    return 0;
}
