#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void to_lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char words[10][15] = { "Mjesec", "Banana", "Jastuk", "Plahta", "Laptop",
                           "Programiranje", "Lampa", "Ormar", "Tepih", "Stol" };
    char active_word[15];
    char guess[15];
    int correct_letters[15] = { 0 };
    int word_length, correct = 0;

    srand((unsigned int)time(NULL));
    strcpy(active_word, words[rand() % 10]);
    word_length = strlen(active_word);

    printf("The word has %d letters.\n", word_length);

    while (!correct) {
        printf("Enter a guess: ");
        fgets(guess, sizeof(guess), stdin);
        guess[strcspn(guess, "\n")] = '\0';

        char lower_active_word[15], lower_guess[15];
        strcpy(lower_active_word, active_word);
        strcpy(lower_guess, guess);
        to_lowercase(lower_active_word);
        to_lowercase(lower_guess);

        if (strcmp(lower_active_word, lower_guess) == 0) {
            printf("Congrats! You guessed the word.\n");
            correct = 1;
        }
        else {
            int found_any = 0;
            for (int i = 0; i < word_length; i++) {
                if (lower_active_word[i] == lower_guess[i]) {
                    correct_letters[i] = 1;
                    found_any = 1;
                }
            }

            if (found_any) {
                printf("Correct letters so far: ");
                for (int i = 0; i < word_length; i++) {
                    if (correct_letters[i]) {
                        printf("%c", active_word[i]);
                    }
                    else {
                        printf("_");
                    }
                }
                printf("\n");
            }
            else {
                printf("No matching letters. Try again.\n");
            }
        }
    }

    return 0;
}
