# Cub3d - Raycaster in C

Welcome to `Cub3d`, a raycaster project created in C using the Minilibx. This project is developed as part of the 42 school curriculum and allows users to explore a 3D-like maze from a 2D perspective. The implementation works on both Mac and Linux platforms.

## Project Overview

Cub3d leverages the ray-casting principles made popular by the early Wolfenstein 3D game. The program uses graphical techniques to render a 3D space within a 2D map, providing an immersive experience of navigation through a maze.

## Key Features

- **3D Rendering**: Simulate 3D environments using 2D maps by casting rays to determine visibility and wall height.
- **Texture Mapping**: Walls and sprites are textured to enhance the realism of the environment.
- **Dynamic Controls**: Players can move forward, backward, and rotate, enhancing the exploration experience.
- **Sprite Rendering**: Non-wall objects (sprites) are rendered within the world.
- **Cross-Platform**: Compatible with Mac and Linux operating systems.

## Visual Showcase

Here's a quick look at what you can expect from Cub3d:

![Cub3d Maze Example](https://github.com/thfavre/cub3d/assets/67341005/35fff3aa-b741-43a3-b95c-58c5da4db992)

### Video Demo

Watch a full demo of the game [here](https://github.com/thfavre/cub3d/assets/67341005/5c3f44d8-3b36-4238-b950-8b917bff09a5).

## Installation

### Prerequisites

To run Cub3d, ensure you have:
- A Unix-based operating system (Linux, MacOS).
- The Minilibx library installed on your system.
- GCC compiler.
- Make build tool.

### Clone and Compile

1. **Clone the repository:**

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
   ```

2. **Navigate to the Cub3d directory:**

   ```bash
   cd Cursus-42/9\ -\ Cub3d
   ```

3. **Compile the project:**

   ```bash
   make
   ```

This will create an executable named `cub3d`.

## Usage

To launch the game, simply run:

   ```bash
   ./cub3d maps/test.cub
   ```

Use the provided `.cub` file or create your own map to define the maze structure, textures, and sprites.

## Controls

- **W/A/S/D:** Move forward, left, backward, right.
- **Left/Right Arrow:** Rotate the view.
- **ESC:** Exit the game.

## Contributions
Contributions to improve Cub3d are welcome. If you find bugs or have suggestions for improvements, please fork the repository, make your changes, and submit a pull request.

## Author
[Bastien ERARD] - berard@student.42.fr
