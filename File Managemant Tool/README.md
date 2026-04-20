[![Language: C++](https://img.shields.io/badge/Language-C++-blue.svg)]()
[![Build: Passing](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()

# File Management Tool

## Table of Contents
1. [Description](#description)
2. [Internal Architecture](#internal-architecture)
3. [Directory Structure](#directory-structure)
4. [Features](#features)
5. [Prerequisites](#prerequisites)
6. [How to Build and Run](#how-to-build-and-run)
7. [Usage / Examples](#usage--examples)

## Description
This is a simple C++ console application that demonstrates basic file-handling operations including writing, reading, and appending to a text file.

## Internal Architecture
This tool relies on the standard library `<fstream>` module, utilizing the **RAII (Resource Acquisition Is Initialization)** principle. 
- **`std::ofstream` (Output File Stream):** Used with `ios::out` for creating/overwriting files and `ios::app` for appending.
- **`std::ifstream` (Input File Stream):** Used with `ios::in` for reading data back into memory.
The architecture sequentially demonstrates opening a stream, validating the stream state (`if (!file)`), performing I/O operations, and safely closing the stream to prevent memory leaks and file locks.

## Directory Structure
```
.
├── file_management.cpp
├── .gitignore
└── README.md
```
## Features
- Writing content to a new text file
- Reading content from an existing text file
- Appending new content to an existing file

## Prerequisites
- A C++ compiler such as `g++`

## How to Build and Run
1. Compile the project:
   ```
   g++ file_management.cpp -o file_management
   ```

2. Run the executable:
   ```
   ./file_management
   ```

3. Clean up generated files (optional):
   ```
   rm file_management example.txt
   ```

## Usage / Examples
Upon execution, the program will automatically create `example.txt`, write to it, append to it, and print the file contents to the terminal.

Example Output:
Contents of example.txt:
```
Hello, this is a test!
This is line 2 of the file.
```

Contents of example.txt after appending:
```
Hello, this is a test!
This is line 2 of the file.
Appending new line to the file.
```