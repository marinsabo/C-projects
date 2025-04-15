# LV4 – Programming I Assignments

This folder contains assignments from the Programming I course at FERIT (1st year). All assignments are written in C and explore topics such as functions, conditionals, number manipulations, character processing, binary conversion, and recursive digit operations.

## Assignments

### Assignment 1

Create a function that calculates and returns the area of a triangle given the lengths of its sides.  
If the provided sides do not form a valid triangle, the function returns `0`.  
Use **Heron’s formula** for area calculation.

**Description:** The program uses a custom function to check triangle validity and compute its area. It demonstrates the function on user input in `main()`.

### Assignment 2

Create a function that calculates and returns the arithmetic mean of all **positive divisors** of a given integer.

**Description:** The function finds all positive divisors of the number, sums them up, and returns their average.

### Assignment 3

Create a function that finds and returns the **difference between the largest and smallest digit** in a given integer.

**Description:** Demonstrates the function by calling it with the number `-26931` and printing the result.

### Assignment 4

Create a function that receives one **character** and returns it as a **lowercase letter** if it's an uppercase letter.  
If not, return the original character.

**Description:** The program reads a character from user input, passes it to the function, and prints the result.

### Assignment 5

Create a function that calculates a mathematical expression based on three real number inputs:  
`y = x1³ - (x1 * x3) / (|x2| + 10⁻³) + 5 * x3²`

**Description:** The function returns the result of the given expression, and the program demonstrates it using user input.

### Assignment 6

Create a function that finds and returns the **first digit (from the left)** of an integer.  
In `main()`, prompt the user to input two **different** integers and print the one with the **larger first digit**.

**Description:** The program loops until two distinct numbers are entered and then compares their leading digits.

### Assignment 7

Create a function that calculates the **sum of the factorials of all digits** in a given number.  
Use a separate function to calculate the factorial of a digit.

**Description:** Demonstrates the function with inputs `123` and `-321`, printing the resulting sums.

### Assignment 8

Create a function that **sums the digits** of a number. If the result is a multi-digit number, repeat the process until a **single-digit** number is obtained.

**Description:** Demonstrates the function using the number `579859`, resulting in a single-digit sum.

### Assignment 9

Create a function that converts a given integer to its **binary representation**, returned as a **decimal-form integer**.  
For example, input `29` returns `11101`.

**Description:** Prompts the user for an integer in the range `[1, 128]`, then converts and prints its binary form as a base-10 number.

---

## How to Use

To get started, clone the repository to your local machine with the following command:

```bash
git clone https://github.com/marinsabo/C-projects.git
```
