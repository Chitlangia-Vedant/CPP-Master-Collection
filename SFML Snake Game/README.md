[![Language: C++17](https://img.shields.io/badge/Language-C++17-blue.svg)]()
[![Dependencies: SFML](https://img.shields.io/badge/Dependencies-SFML-orange.svg)]()
[![Build: Passing](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()

# SFML Snake Game

## Table of Contents
1. [Description](#description)
2. [Internal Architecture](#internal-architecture)
3. [Directory Structure](#directory-structure)
4. [Features](#features)
5. [Prerequisites](#prerequisites)
6. [How to Build and Run](#how-to-build-and-run)
7. [Usage / Controls](#usage--controls)

## Description
A modern and minimalistic implementation of the classic Snake Game using SFML (Simple and Fast Multimedia Library) in C++. This project showcases basic game loop architecture, event handling, and real-time graphics rendering.

## Internal Architecture
The application is built around a classic **Game Loop** pattern governed by SFML's window events:
1. **Process Input:** Captures keyboard events (Arrow Keys, ESC) without blocking.
2. **Update State:** Updates the snake's position, checks for collisions (with walls or itself), and manages food generation/consumption. The snake is typically implemented as a `std::deque` or `std::vector` of coordinates.
3. **Render:** Clears the screen, draws the updated entities using SFML sprite/shape rendering, and swaps the display buffers.
The project is modularized into OOP concepts: `Game` (loop and state), `Snake` (movement logic), and `Food` (spawning logic).

## Directory Structure
```
.
├── Game.cpp
├── Game.h
├── main.cpp
├── arial.ttf
├── README.md
└── resources/
    ├── apple.png
    ├── bg.png
    ├── die.wav
    ├── gameover.png
    ├── goldenapple.png
    ├── grapes.png
    ├── munch.wav
    ├── pop.wav
    └── snakebod.png
```
## Features
- Classic snake gameplay: eat food, grow longer, avoid collisions
- Smooth graphics rendered with SFML
- Keyboard input for real-time control
- Score tracking and game-over condition

## Prerequisites
- C++17 or later
- SFML (Simple and Fast Multimedia Library)
  - Linux: `sudo apt-get install libsfml-dev`
  - macOS: `brew install sfml`
  - Windows: Download binaries from sfml-dev.org and link to your project

## How to Build and Run
1. Compile the project using g++:
   ```
   g++ -std=c++17 -o snake main.cpp Game.cpp -lsfml-graphics -lsfml-window -lsfml-system
   ```

2. Run the executable:
   ```
   ./snake
   ```

## Usage / Controls
| Key         | Action            |
|-------------|-------------------|
| Arrow Keys  | Move the snake    |
| ESC         | Quit game         |