# Cpp-Practice

A collection of small C++ programs written while learning C and C++ fundamentals — variables, functions, arrays, file I/O, and basic program structure.

## Contents

| File | Description |
|---|---|
| `src/Lab1.cpp` | First "hello world" style warm-up program. |
| `src/test01.cpp` | Reads and echoes a number from the user. |
| `src/Ikl.cpp` | Minimal hello-world sanity check. |
| `src/TwoNumbers.cpp` | Reads two integers and prints their sum. |
| `src/AreaCalc.cpp` | Calculates the area of a rectangle using a function that reads dimensions by reference. |
| `src/ReferenceParameter.cpp` | Demonstrates passing parameters by reference. |
| `src/AveNumFunction.cpp` | Computes the average of two numbers via a function. |
| `src/FunctionsPractice.cpp` | Determines whether a number is even or odd. |
| `src/CadtoEuro.cpp` | Converts Canadian Dollars to Euros (INFO 1112 Lab #4). |
| `src/GrossPay.cpp` | Calculates an employee's gross pay from hours worked. |
| `src/GradeSystem.cpp` | Converts numeric averages into letter grades. |
| `src/TestScoreA.cpp` / `src/TestScoreB.cpp` | Reads, displays, and analyzes a 2D array of student test scores, including averages, letter grades, and search (Assignment 2, Parts A & B). |
| `src/FileProgram.cpp` | Reads a filename from the user and processes numbers from that file. |
| `src/NonnegativeArrayProcessor.cpp` | Reads nonnegative integers into an array and reports their average, minimum, and how many fall in the 0–10 range. |
| `src/listofnumbers.txt` | Sample input data used by the file-reading programs. |

## Building

Each file is a standalone program. Compile any one with g++/clang++, for example:

```bash
g++ -std=c++17 src/GradeSystem.cpp -o grade_system
./grade_system
```

## Notes

This is coursework/practice code, kept here as a personal record of working through C++ fundamentals rather than as a polished library.
