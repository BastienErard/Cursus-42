# Libft

Libft is a foundational project at 42 that involves recreating essential functions from the standard C library, as well as developing additional utility functions. This custom library serves as a basis for future projects, reinforcing a deep understanding of C programming and memory management.

## Project Overview

The objective of Libft is to reimplement standard C library functions and create new ones to facilitate various operations, including:

- **Libc Functions**: Reimplementations of standard C functions for memory and string manipulation.
- **Additional Functions**: Utility functions that extend beyond the standard library's offerings.
- **Bonus Functions**: Functions designed for linked list manipulation.

This project emphasizes rigorous coding standards and efficient algorithm implementation, laying a solid foundation for advanced programming tasks.

## Features

Libft includes a variety of functions categorized as follows:

### Libc Functions

Recreations of standard C library functions, such as:

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_strlen`
- `ft_strcpy`
- `ft_strcmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_toupper`
- `ft_tolower`

### Additional Functions

Custom utility functions, including:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus Functions

Functions for linked list manipulation:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Getting Started

### Prerequisites

To compile and use Libft, ensure that you have the following:

- A Unix-like operating system (Linux, macOS)
- `gcc` compiler
- `make` build tool

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
2. Navigate to the Libft directory:

   ```bash
   cd Cursus-42/0\ -\ Libft
3. Compile the library:

   ```bash
	make
This will generate the libft.a static library.

## Usage

To use Libft in your projects:

1. Include the header file in your source code:

   ```c
	#include "libft.h"
2. During compilation, link the libft.a library:

   ```bash
	gcc your_program.c -L. -lft -o your_program
Ensure that the libft.a file is in the same directory or adjust the -L flag accordingly.

## Testing

Libft can be tested using various third-party testers available in the 42 community. These testers provide comprehensive test cases to validate the correctness and robustness of your implementations.

