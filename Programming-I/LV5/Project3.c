#include <stdio.h>

int main()
{
    int polje[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Unesite element [%d][%d]: ", i, j);
            scanf("%d", &polje[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4 / 2; j++) {
            int temp = polje[i][j];
            polje[i][j] = polje[i][3 - j];
            polje[i][3 - j] = temp;
        }
    }

    printf("\nObrnuta matrica:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}
