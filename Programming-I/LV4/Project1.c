#include <stdio.h>
#include <math.h>

float izracunaj_povrsinu(float a, float b, float c) {
    float s, povrsina;

    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }

    s = (a + b + c) / 2;
    povrsina = sqrt(s * (s - a) * (s - b) * (s - c));
    return povrsina;
}

int main() {

    float a, b, c, povrsina;

    printf("Unesite duljine stranica trokuta: ");
    scanf("%f %f %f", &a, &b, &c);

    povrsina = izracunaj_povrsinu(a, b, c);

    if (povrsina == 0) {
        printf("Stranice ne èine trokut.\n");
    }
    else {
        printf("Površina trokuta je: %.3f\n", povrsina);
    }

    return 0;
}
