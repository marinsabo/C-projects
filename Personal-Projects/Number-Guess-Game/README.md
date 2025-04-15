# Number Guess Game – C Project
A simple terminal-based number guessing game written in C. The program generates a random number between 0 and 100, and the user tries to guess it. After each attempt, the game provides feedback whether the correct number is higher or lower than the guess. The game continues until the user correctly guesses the number, and it also tracks the total number of attempts.
The game starts by generating a random number using the current time as a seed. It prompts the user to enter a guess. If the guess is outside the range of 0 to 100, the program notifies the user. Otherwise, it checks if the guess is too high or too low compared to the generated number and continues looping until the correct number is guessed. Once guessed correctly, the game displays the total number of attempts it took.
Example:
Number is in interval 0 - 100 Enter a guess: 50 Higher Enter a guess: 75 Lower Enter a guess: 62 You guessed the number! You did it in 3 attempts.
To compile and run the code:
1. Save the code in a file named `number_guess_game.c`.
2. Open terminal in the same folder.
3. Compile with: `gcc number_guess_game.c -o number_guess_game`
4. Run with: `./number_guess_game`
This project uses only standard C libraries: `stdio.h`, `stdlib.h`, and `time.h`. It’s a great beginner project to get familiar with random number generation, user input, loops, and conditionals.
Project created by **Marin Sabo** as part of learning C programming in the Programming I and Programming II course at FERIT.
