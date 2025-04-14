#include <stdio.h>

int main() {
    char x, y;

    scanf(" %c %c", &x, &y);
    printf("%c %c\n", y, x);
    printf("Dekadske vrijednosti: %d %d\n", x, y);
    printf("Oktalne vrijednosti: %o %o\n", x, y);
    printf("Heksadekadske vrijednosti: %x %x\n", x, y);

    return 0;
}