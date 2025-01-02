# C++ Conditional Statements: A Comprehensive Guide

Welcome to the **C++ Conditional Statements** repository! This guide will walk you through the various conditional constructs in C++, complete with clear examples to enhance your understanding.

## 📚 Table of Contents
- [C++ Conditional Statements: A Comprehensive Guide](#c-conditional-statements-a-comprehensive-guide)
  - [📚 Table of Contents](#-table-of-contents)
  - [Introduction](#introduction)
  - [Types of Conditional Statements](#types-of-conditional-statements)
    - [1. If Statement](#1-if-statement)
      - [Explanation](#explanation)
    - [2. If-Else Statement](#2-if-else-statement)
    - [3. Else-If Ladder](#3-else-if-ladder)

---

## Introduction

Conditional statements in C++ are powerful constructs that allow you to write programs that make decisions based on given conditions. They are an essential part of programming logic, enabling you to control the flow of your program.

---

## Types of Conditional Statements

### 1. If Statement
The simplest form of conditional statement:
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 18;

    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    }

    return 0;
}
```
#### Explanation
Executes the block if the condition age >= 18 is true.

### 2. If-Else Statement
Handles two possibilities:
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 16;

    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }

    return 0;
}
```
Explanation: Executes one block if the condition is true and another if false.

### 3. Else-If Ladder
Checks multiple conditions sequentially:
```cpp
#include <iostream>
using namespace std;

int main() {
    int score = 85;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
```


