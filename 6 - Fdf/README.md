# FDF - Wireframe Renderer

`FDF` (Fil de Fer, meaning "wireframe" in French) is a graphical project from the 42 Network designed to create simple wireframe models of landscapes. The program reads a map from a file and creates its graphical representation in 3D using the minilibx, a custom graphics library developed at 42.

## Project Overview

FDF challenges students to understand mathematical concepts and graphics programming, particularly in terms of rendering 3D landscapes on a 2D display. The project involves parsing input data and transforming it into a visually appealing wireframe mesh.

## Features

- **3D Rendering**: Transforms 2D coordinates from a map file into a 3D landscape using wireframe modeling.
- **Rotation and Zoom**: Allows users to rotate the view and zoom in or out to explore the model from different perspectives.
- **Color Gradients**: Implements color gradients based on elevation to enhance the visual output and terrain understanding.
- **Interactive Controls**: Supports keyboard and mouse input for interactive manipulation of the 3D landscape.

## Installation

### Prerequisites

To run FDF, you need:
- A Unix-based operating system (Linux, MacOS).
- The Minilibx library, which can be installed on MacOS via the project repository.
- GCC or Clang compiler.
- Make build tool.

### Clone and Compile

1. **Clone the repository:**

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
   ```

2. **Navigate to the FDF directory:**

   ```bash
   cd Cursus-42/6\ -\ Fdf
   ```

3. **Compile the project:**

   ```bash
   make
   ```

This will generate the executable `fdf`.

## Usage

Run the program with a map file:

   ```bash
   ./fdf maps/42.fdf
   ```

This command will open a window displaying the 3D wireframe model of the provided map. Use the keyboard and mouse to interact with the model:

- Arrows: Rotate the model.
- Mouse scroll: Zoom in and out.
- ESC: Exit the program.

## Testing

Test FDF by running it with different map files to ensure it correctly handles various data sets and responds to user inputs as expected. Analyze performance and optimize rendering efficiency.

## Contributions
Contributions to improve `FDF` are welcome. Please fork the repository, make your changes, and submit a pull request.

## Author
[Bastien ERARD] - berard@student.42.fr
