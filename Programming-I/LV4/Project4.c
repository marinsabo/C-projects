#include <stdio.h>

char funkcija(char c) {

    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }

    return c;
}

int main() {
    char znak;

    scanf("%c", &znak);

    printf("%c\n", funkcija(znak));

    return 0;
}