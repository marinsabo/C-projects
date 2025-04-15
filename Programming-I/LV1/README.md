# Word Guess Game

This folder contains a personal project written in **C** as part of practicing programming fundamentals. The game is a simple word guessing challenge that utilizes strings, loops, conditionals, and random number generation.

## Project

1. **Word Guess Game**  
   A terminal-based game where the user tries to guess a randomly selected word from a predefined list.

   - **Description**:  
     The program selects one word at random from a list of 10. It then prompts the user to guess the word. After each incorrect guess, it compares the guessed word with the actual one and reveals correctly guessed letters in their correct positions, while hiding the others with underscores. The game continues until the user guesses the full word correctly.

---

## How to Use

1. **Clone the repository**:

   To get started, clone the repository to your local machine using the following command:

   ```bash
   git clone https://github.com/yourusername/word-guess-game.git
   ```

2. **Compile the code**:

   Use a C compiler like `gcc` to compile the code:

   ```bash
   gcc word_guess_game.c -o word_guess_game
   ```

3. **Run the game**:

   ```bash
   ./word_guess_game
   ```
