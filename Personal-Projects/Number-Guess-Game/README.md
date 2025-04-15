```markdown
# Number Guessing Game – C Project

A simple terminal-based number guessing game written in C. The program generates a random number between 0 and 100, and your task is to guess it. After each guess, it tells you whether your guess is too high, too low, or outside the valid range. The goal is to find the correct number with as few attempts as possible. The number is randomly generated using `rand()` seeded with the current time. The game uses a `do-while` loop to keep prompting the user until the correct number is guessed. It also tracks how many attempts it takes you to find the number, and displays that at the end.
How the game works:

- The program chooses a random number between 0 and 99.
- It tells you the valid interval (0 - 100).
- You type a number and press Enter.
- If the number is out of range, it shows a warning.
- If the number is too high, it tells you: "Lower".
- If the number is too low, it tells you: "Higher".
- When you guess correctly, it congratulates you and shows how many tries you needed.
  Example output:
```

Number is in interval 0 - 100
Enter a guess: 70
Lower
Enter a guess: 30
Higher
Enter a guess: 50
Higher
Enter a guess: 60
You guessed the number!
You did it in 4 attempts.

```
To compile and run the code:
1. Save the code in a file named `main.c`
2. Open terminal (Linux/macOS) or Command Prompt/Git Bash (Windows) in the same folder
3. Compile the code with: `gcc main.c -o number-guess`
4. Run the game with: `./number-guess` (on Windows use `number-guess.exe`)
Make sure you have GCC installed. If you are using Windows, install [MinGW](https://www.mingw-w64.org/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/). If you use Visual Studio, create an Empty Project, add a new .c file, paste the code inside, right-click the file and select "Set as Startup File", then press Ctrl + F5 to run it.
The project uses the standard C libraries: `stdio.h` for input/output, `stdlib.h` for generating the random number, and `time.h` to seed the randomness based on system time. This project is ideal for beginners learning about loops, conditionals, user input, and random number generation in C.
Project created by **Marin Sabo** as part of learning C programming in the Programming I course at FERIT.
```
