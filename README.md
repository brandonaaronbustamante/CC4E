# CC4E – C Programming Exercises

This repository contains my solutions to selected exercises from the **C for Everyone (CC4E)** course by Dr. Charles Severance. I'm using this project to sharpen my C fundamentals through focused, practical exercises.

> 📍 **Start Date:** April 20, 2025  
> 🧑‍💻 Following only the exercises assigned in the CC4E course

---

## 📘 Chapter 1 – Fundamentals

### ✅ Status: Completed

Topics covered:
- Output with `printf`
- Loops (`for`, `while`)
- Character I/O with `getchar` / `putchar`
- Arrays and strings
- Writing simple functions

### 📂 Exercises Completed

| Exercise | Description                          | Compile Command                  |
|----------|--------------------------------------|----------------------------------|
| EX_1-01  | Hello, World                         | `gcc EX_1-01.c`                  |
| EX_1-03  | Fahrenheit to Celsius table          | `gcc EX_1-03.c`                  |
| EX_1-04  | Celsius to Fahrenheit table          | `gcc EX_1-04.c`                  |
| EX_1-05  | Reversed temperature table           | `gcc EX_1-05.c`                  |
| EX_1-06  | Count blanks and newlines            | `gcc EX_1-06.c`                  |
| EX_1-07  | Replace multiple spaces with one     | `gcc EX_1-07.c`                  |
| EX_1-10  | Print each word on a new line        | `gcc EX_1-10.c`                  |
| EX_1-17  | Reverse a string in place            | `gcc EX_1-17.c`                  |

---

## 🧪 Testing with Input Files

For exercises that require structured input, use the provided `.txt` files with standard input redirection:

```bash
# EX_1-06: Count blanks and newlines
gcc EX_1-06.c
./a.out < Input_1-06.txt

# EX_1-07: Collapse multiple spaces
gcc EX_1-07.c
./a.out < Input_1-07.txt

# EX_1-10: Print each word on a new line
gcc EX_1-10.c
./a.out < Input_1-10.txt
