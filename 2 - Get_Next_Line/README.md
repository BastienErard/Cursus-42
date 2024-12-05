# Get Next Line

Get Next Line (GNL) is a 42 school project that involves creating a function which reads a line from a file descriptor. This project introduces the concept of static variables in C and helps understand file manipulation.

## Project Overview

The main goal is to create a function that reads a text file and returns its content line by line. This function represents a convenient way to read text files and will be essential for future projects.

### Features

- Read from file descriptors line by line
- Handle multiple file descriptors simultaneously (bonus part)
- Dynamic buffer size management through compilation flag
- Memory efficient implementation
- Support for both files and standard input

## Technical Details

### Function Prototype

```c
char *get_next_line(int fd);
```

### Parameters

- `fd`: The file descriptor to read from

### Return Values

- On success: Returns the line that was read (including the newline character `\n` unless it's the end of file)
- On failure or end of file: Returns NULL

### Compilation

The project is compiled using the following flags:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c
```

The buffer size can be modified by changing the value after `-D BUFFER_SIZE=`.

## Project Structure

```
.
├── get_next_line.c
├── get_next_line.h
├── get_next_line_utils.c
├── get_next_line_bonus.c
├── get_next_line_bonus.h
└── get_next_line_utils_bonus.c
```

### Mandatory Files

- `get_next_line.c`: Main function implementation
- `get_next_line.h`: Header file containing function prototypes
- `get_next_line_utils.c`: Helper functions

### Bonus Files

- `get_next_line_bonus.c`: Implementation with multiple fd support
- `get_next_line_bonus.h`: Header file for bonus features
- `get_next_line_utils_bonus.c`: Additional helper functions for bonus features

## Constraints

- No use of global variables
- No use of libft library
- Function must handle various buffer sizes
- Memory leaks must be avoided
- Code must comply with the 42 Norm
- The `lseek()` function is forbidden

## Bonus Features

The bonus part includes:
- Managing multiple file descriptors simultaneously
- Using only one static variable
- Maintaining separate reading states for each file descriptor

## Testing

When testing the program, consider:
1. Different buffer sizes (very small, medium, and large values)
2. Various types of files and input sources
3. Edge cases like empty files or very long lines
4. Multiple file descriptors handling (for bonus)

## Note

This project introduces important concepts in C programming:
- Static variables
- File descriptors
- Memory management
- Buffer handling

It's recommended to thoroughly test the function with various scenarios before submission.

## Author

[Bastien ERARD] - berard@student.42.fr
