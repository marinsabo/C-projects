#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);
    printf("Vrijednost broja u dekadskom obliku: %d", x);
    printf("\nVrijednost broja u oktalnom obliku: %o", x);
    printf("\nVrijednost broja u heksadekadskom obliku: %x", x);

    return 0;
}