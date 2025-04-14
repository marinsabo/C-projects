#include <stdio.h>

int main() {
    short int x;
    double y;

    scanf("%hd %lf", &x, &y);
    printf("%hd %lf", x, y);

    return 0;
}