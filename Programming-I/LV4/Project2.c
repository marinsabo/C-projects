#include <stdio.h>
#include <stdlib.h> 

int razlika(int n) {
    n = abs(n);

    int min = n % 10;
    int max = n % 10;
    int z;

    while (n != 0) {
        z = n % 10;
        if (z < min) {
            min = z;
        }
        if (z > max) {
            max = z;
        }
        n /= 10;
    }

    return max - min;
}

int main() {
    int n = -26931;
    int raz = razlika(n);

    printf("Razlika najveæe i najmanje znamenke broja %d je: %d\n", n, raz);

    return 0;
}
