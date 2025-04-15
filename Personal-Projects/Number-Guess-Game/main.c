#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess = 0;
    int track = 0;

    srand(time(NULL));

    int random_num = rand() % 101;

    printf("Number is in interval 0 - 100\n");
    printf("Enter a guess: ");

    do {
        scanf("%d", &guess);

        if (guess > 100 || guess < 0) {
            printf("\nYour guess is not in interval.\n");
        }
        else {
            track++;

            if (guess > random_num) {
                printf("\nLower\n");
            }
            else if (guess < random_num) {
                printf("\nHigher\n");
            }
            else {
                printf("\nYou guessed the number!\n");
                printf("You did it in %d attempts.\n", track);
                return 0;
            }
        }

    } while (guess != random_num);

    return 0;
}
