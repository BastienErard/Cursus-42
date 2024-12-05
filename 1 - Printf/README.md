# ft_printf

`ft_printf` is a project from 42's curriculum that involves recreating the standard `printf` function in C. The goal is to gain a deeper understanding of variadic functions, formatting options, and output handling in low-level programming.

## Project Overview

The `ft_printf` project challenges students to replicate the behavior of the standard `printf` function while supporting a subset of its functionalities. This project emphasizes:

- The use of variadic functions (`stdarg.h`).
- Handling various format specifiers for different data types.
- Proper memory management and buffer handling.

## Supported Format Specifiers

The following format specifiers are implemented in `ft_printf`:

- **%c**: Single character.
- **%s**: Null-terminated string.
- **%p**: Pointer address (in hexadecimal).
- **%d**: Signed decimal integer.
- **%i**: Signed decimal integer.
- **%u**: Unsigned decimal integer.
- **%x**: Unsigned hexadecimal integer (lowercase).
- **%X**: Unsigned hexadecimal integer (uppercase).
- **%%**: Prints a literal `%`.

## Features

- Fully functional replacement for `printf` with a subset of features.
- Comprehensive error handling to ensure robustness.
- Efficient use of buffers for output operations.
- Modular and reusable code structure.

## Getting Started

### Prerequisites

To compile and use `ft_printf`, ensure you have:

- A Unix-like operating system (Linux, macOS).
- `gcc` compiler.
- `make` build tool.

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
2. Navigate to the `ft_printf` directory:

   ```bash
   cd Cursus-42/1\ -\ Printf
3. Compile the library:

   ```bash
   make
This will generate the libftprintf.a static library.

### Usage

To use `ft_printf` in your projects:

1. Include the header file in your source code:

   ```c
   #include "ft_printf.h"
2. During compilation, link the libftprintf.a library:

   ```bash
   gcc your_program.c -L. -lftprintf -o your_program
Ensure that the libftprintf.a file is in the same directory or adjust the -L flag accordingly.
