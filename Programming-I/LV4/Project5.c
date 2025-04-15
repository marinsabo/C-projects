#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

float funkcija(float x1, float x2, float x3) {

    float y;

    y = pow(x1, 3);
    y = y - (x1 * x3) / (abs(x2) + pow(10, -3));
    y = y + 5 * pow(x3, 2);

    return y;

}

int main() {

    float x1, x2, x3, y;

    scanf("%f %f %f", &x1, &x2, &x3);

    y = funkcija(x1, x2, x3);

    printf("%f", y);

    return 0;
}