# SFML Snake Game
A modern and minimalistic implementation of the classic Snake Game using SFML (Simple and Fast Multimedia Library) in C++. This project showcases basic game loop architecture, event handling, and real-time graphics rendering with SFML.

## Features
- Classic snake gameplay: eat food, grow longer, avoid collisions
- Smooth graphics rendered with SFML
- Keyboard input for real-time control
- Score tracking and game-over condition

## Getting Started
### Prerequisites
- C++17 or later
- SFML (Simple and Fast Multimedia Library)

### Installation
1. Clone the repository:
```bash
git clone https://github.com/cpalaka/sfml-snake.git
cd sfml-snake
```
2. Install SFML
- On Linux (Debian/Ubuntu):
```bash
sudo apt-get install libsfml-dev
```
- On macOS (with Homebrew):
```bash
brew install sfml
```
- On Windows:
  - Download the SFML binaries from sfml-dev.org
  - Link SFML to your project using Visual Studio or your preferred IDE

3. Compile the game
Using g++:
```bash
g++ -std=c++17 -o snake main.cpp Game.cpp -lsfml-graphics -lsfml-window -lsfml-system
```
4. Run the game
```bash
./snake
```
## Controls
| Key	| Action|
|---|---|
| Arrow Keys	| Move the snake |
| ESC	| Quit game |

## Code Structure
- main.cpp – Entry point and game launcher
- Game.cpp/.h – Main game loop, event handling, updates, rendering
- Snake.cpp/.h – Snake movement, growth, collision
- Food.cpp/.h – Food generation and rendering

## Concepts Demonstrated
- Game loop and frame limiting
- Real-time input processing
- Basic 2D rendering with SFML
- Object-oriented programming in C++
- Clean code structure and modular design
