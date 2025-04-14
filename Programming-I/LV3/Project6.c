#include <stdio.h>
#include <math.h>

int main() {
    int n, i, prost = 1;

    printf("Unesite cijeli broj: ");
    scanf("%d", &n);

    if (n <= 1) {
        prost = 0;
    }

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prost = 0;
            break;
        }
    }

    if (prost == 1) {
        printf("%d je prost broj.\n", n);
    }
    else {
        printf("%d nije prost broj.\n", n);
    }

    return 0;
}

