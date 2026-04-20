[![Language: C++](https://img.shields.io/badge/Language-C++17-blue.svg)]()
[![Build: Passing](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()

# C++ Portfolio Projects

## Table of Contents
1. [Overview](#overview)
2. [Repository Structure](#repository-structure)
3. [Projects Included](#projects-included)
4. [General Prerequisites](#general-prerequisites)

## Overview
This repository contains a curated collection of C++ projects designed to demonstrate various aspects of software development. The projects range from fundamental file I/O operations and recursive parsing to advanced concepts like real-time game loops, graphical rendering, and multithreaded processing. 

All projects adhere to modern C++ standards (C++17) and utilize RAII principles and clean architectural patterns.

## Repository Structure
```
.
├── File Compressor & Decompressor/
├── File Management Tool/
├── SFML Snake Game/
├── Simple Arithmetic Expression Compiler/
└── README.md
```
*(Note: Each individual project directory contains its own detailed README, build instructions, and source code).*

## Projects Included

### 1. [Multithreaded File Compressor & Decompressor](https://github.com/Chitlangia-Vedant/CPP-Projects/tree/main/Multithreaded%20File%20Compressor%20%26%20Decompressor)
A high-performance file compression utility using the `zlib` library. 
- **Core Concepts:** Multithreading (`std::thread`), memory chunking, Master-Worker architecture, CMake build system.
- **Highlights:** Significantly reduces compression time for large files by processing byte chunks in parallel.

### 2. [SFML Snake Game](https://github.com/Chitlangia-Vedant/CPP-Projects/tree/main/SFML%20Snake%20Game)
A modern, 2D implementation of the classic Snake game.
- **Core Concepts:** Real-time game loops, event handling, 2D graphics rendering, Object-Oriented Programming (OOP).
- **Highlights:** Utilizes the Simple and Fast Multimedia Library (SFML) for smooth frame generation and non-blocking input handling.

### 3. [Simple Arithmetic Expression Compiler](https://github.com/Chitlangia-Vedant/CPP-Projects/tree/main/Simple%20Arithmetic%20Expression%20Compiler)
A command-line tool that evaluates mathematical strings.
- **Core Concepts:** Lexical analysis, Recursive Descent Parsing, Abstract Syntax Trees (implicit), call-stack manipulation.
- **Highlights:** Safely evaluates complex nested parentheses and respects the standard order of operations (PEMDAS) without relying on external evaluation libraries.

### 4. [File Management Tool](https://github.com/Chitlangia-Vedant/CPP-Projects/tree/main/File%20Management%20Tool)
A foundational command-line interface for file manipulation.
- **Core Concepts:** Standard library `<fstream>`, stream state validation, dynamic appending, resource management.
- **Highlights:** Demonstrates safe, leak-free file locking and manipulation using standard C++ streams.

## General Prerequisites
To build and run all the projects in this repository, you will need a development environment equipped with the following:

- **Compiler:** A modern C++ compiler (e.g., GCC/g++ 8+ or Clang) supporting C++17.
- **Build System:** `CMake` (3.10+) is required for the File Compressor project.
- **Libraries:**
  - `zlib` (Required for File Compressor)
  - `SFML` (Required for the Snake Game)

