# Word Guess Game – C Project

A simple terminal-based word guessing game written in C. The program selects a random word from a predefined list, and your task is to guess the word. After each guess, it shows which letters you got right in the correct position, helping you to gradually reveal the full word.

The game starts by selecting a random word from a list of 10 words. It tells you how many letters the word has. You enter a word guess. If your guess matches the hidden word (case-insensitive), you win. If your guess is incorrect, the program shows which letters are correct and in the correct position using letters and underscores. The game continues until you guess the word correctly.

Example:
```
The word has 6 letters.
Enter a guess: planet
Correct letters so far: p____t
Enter a guess: laptop
Congrats! You guessed the word.
```

Here is an example English word list you can use in your code (replaces the original Croatian words):
```c
char words[10][15] = { "Moon", "Banana", "Pillow", "Sheet", "Laptop", "Programming", "Light", "Shelf", "Carpet", "Desk" };
```
You can replace these words with any others of your choice, just make sure they don't exceed 15 characters.

To compile and run the code:
1. Save the code in a file named `main.c`.
2. Open terminal in the same folder.
3. Compile with: `gcc main.c -o word-guess`
4. Run with: `./word-guess`

The project uses only standard libraries: `stdio.h`, `stdlib.h`, `string.h`, `time.h`, and `ctype.h`. It's a great little project to get familiar with string manipulation, randomness, and user input in C.

Project created by **Marin Sabo** as part of learning C programming in the Programming I and Programming II course at FERIT.
