[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24197012)
# CISC 192 Lab 3.2: Grade Analyzer Functions

## Overview

In this lab, you will build a small grade analyzer program using user-defined functions.

The focus of this lab is **function design**. You will complete functions that calculate totals, averages, letter grades, and pass/fail status. The interactive program will call those functions, and the automated tests will verify that your functions work correctly.

## Learning Goals

By completing this lab, you will practice:

- Writing user-defined functions
- Using function parameters
- Returning values from functions
- Writing `void` functions
- Using function prototypes in a header file
- Separating declarations and definitions
- Keeping calculation logic separate from input/output
- Running unit tests with `make test`

## Required Features

Your program must:

- Ask the user for three assignment scores
- Calculate the total score
- Calculate the average score
- Determine the letter grade
- Determine whether the student is passing
- Print a clear grade report
- Use the required functions declared in `include/grade_analyzer.hpp`
- Pass the automated tests

## Files You Will Edit

You should primarily edit:

- `src/grade_analyzer.cpp`
- `src/main.cpp`

Do not edit the files in `tests/` unless your instructor tells you to.

## Build and Run

```bash
make
./main
```

## Run Tests

```bash
make test
```

## Clean Build Files

```bash
make clean
```

## Required Functions

```cpp
double calculateTotal(double score1, double score2, double score3);
double calculateAverage(double total, int count);
char determineLetterGrade(double average);
bool isPassing(double average);
bool isValidScore(double score);
void printGradeReport(double total, double average, char letterGrade, bool passing);
```

## Grade Scale

Use this grade scale:

| Average | Letter Grade |
|---|---|
| 90 or higher | A |
| 80–89.999 | B |
| 70–79.999 | C |
| 60–69.999 | D |
| Below 60 | F |

A student is passing if the average is **70 or higher**.

## Example Run

```text
Grade Analyzer

Enter score 1: 90
Enter score 2: 85
Enter score 3: 95

Grade Report
Total: 270
Average: 90
Letter Grade: A
Status: Passing
```

## Grading Notes

This lab is about functions. Do not put all the calculation logic directly in `main()`.

The tests call your functions directly. Your program may appear to run, but you will not receive full credit unless the required functions return correct values.
