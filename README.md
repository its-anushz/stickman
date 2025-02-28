# Stickman Drawing using OpenGL

## Overview
This is a fun beginner-friendly project that draws a simple stickman using OpenGL. It serves as an introduction to basic graphics programming using OpenGL and GLUT.

## Requirements
To run this project, you need:
- A C++ compiler (GCC, MSVC, etc.)
- OpenGL Utility Toolkit (GLUT)
- OpenGL libraries (GL, GLU)

## How to Run
### Windows (MinGW)
1. Install GLUT and OpenGL libraries.
2. Compile using:
   ```sh
   g++ stickman.cpp -o stickman -lopengl32 -lglu32 -lfreeglut
   ```
3. Run:
   ```sh
   ./stickman
   ```

### Linux (g++)
1. Install OpenGL and GLUT:
   ```sh
   sudo apt-get install freeglut3-dev
   ```
2. Compile:
   ```sh
   g++ stickman.cpp -o stickman -lGL -lGLU -lglut
   ```
3. Run:
   ```sh
   ./stickman
   ```

## About the Code
- `sinit()`: Sets up the 2D coordinate system.
- `sdisplay()`: Draws the stickman using `GL_LINES`.
- `main()`: Initializes GLUT, creates a window, and runs the display function.

## Features
- Simple stickman drawing using OpenGL.
- Good starting point for beginners to understand OpenGL basics.

## Future Ideas
- Add simple animations.
- Allow user interactions.
- Experiment with different shapes.

## Author
Anushree K C

## License
This project is just for fun! Feel free to play around with it and modify it as you like.

