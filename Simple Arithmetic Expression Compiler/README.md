[![Language: C++](https://img.shields.io/badge/Language-C++-blue.svg)]()
[![Build: Passing](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()

# Simple Arithmetic Expression Compiler

## Table of Contents
1. [Description](#description)
2. [Internal Architecture](#internal-architecture)
3. [Directory Structure](#directory-structure)
4. [Features](#features)
5. [Prerequisites](#prerequisites)
6. [How to Build and Run](#how-to-build-and-run)
7. [Usage / Examples](#usage--examples)

## Description
This is a simple C++ program that parses and evaluates basic arithmetic expressions using a recursive descent parser.

## Internal Architecture
This compiler utilizes a **Recursive Descent Parser** to evaluate expressions. It breaks down the mathematical string based on standard order of operations (PEMDAS) using the following implicit grammar:
- **Expression:** Consists of Terms separated by `+` or `-`.
- **Term:** Consists of Factors separated by `*` or `/`.
- **Factor:** A raw Number or an Expression enclosed in parentheses `( )`.
The parser reads tokens sequentially, building a call stack that naturally respects operator precedence.

## Directory Structure
.
├── simple_arithmetic_compiler.cpp
└── README.md

## Features
- Supports Addition (+), Subtraction (-), Multiplication (*), and Division (/)
- Evaluates Parentheses ()
- Handles whitespace gracefully
- Provides basic error messages (e.g., invalid character, division by zero)

## Prerequisites
- A C++ compiler such as `g++`

## How to Build and Run
1. Compile the project:
   ```
   g++ -o compiler simple_arithmetic_compiler.cpp
   ```

2. Run the executable:
   ```
   ./compiler
   ```

## Usage / Examples
Enter an arithmetic expression when prompted. Type 'exit' to quit the program.

Example:
```
Enter expression: 2 + 3 * (4 - 1)
Result: 11
```