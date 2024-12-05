# Minishell

`Minishell` is a project from the 42 Network that challenges students to create a simple Unix shell. The goal is to learn about processes and file descriptors, environment variables, and the Unix process API.

## Project Overview

Minishell aims to replicate the basic functionalities of a traditional Unix shell, such as `bash`. The project teaches students how to handle user input, execute commands, and manage an environment while dealing with a complex set of system-level functionalities.

## Features

- **Command Execution**: Ability to execute commands with their arguments and handle errors appropriately.
- **Built-in Commands**: Includes implementations of `echo`, `cd`, `pwd`, `export`, `unset`, `env`, and `exit`.
- **Environment Variables**: Support for environment variables which can be added, removed, or modified.
- **Redirections**: Handling of input and output redirections (`>`, `>>`, `<`), as well as command pipelining (`|`).
- **Signal Handling**: Management of signals like `SIGINT` (Ctrl-C) and `SIGQUIT` (Ctrl-\\).

## Technical Specifications

The shell uses a combination of C programming techniques, utilizing libraries such as `readline` for handling input, and system calls for executing commands and managing processes.

## Installation

### Prerequisites

To run Minishell, you'll need:
- A Unix-based operating system (Linux, MacOS).
- GNU Compiler Collection (GCC).
- Make build tool.
- The Readline library.

### Clone and Compile

1. **Clone the repository:**

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
   ```

2. **Navigate to the Minishell directory:**

   ```bash
   cd Cursus-42/8\ -\ Minishell
   ```

3. **Compile the project:**

   ```bash
   make
   ```

This will generate the `minishell` executable.

## Usage

Run the shell by executing:

   ```bash
   ./minishell
   ```

You can now enter commands just like in a typical shell environment.

## Testing

Testing involves:

- Checking the shell's response to various command inputs.
- Ensuring that environment variable manipulations are handled correctly.
- Verifying that redirections and pipes work as expected.
- Making sure that signal handling is properly implemented.

## Contributions
Contributions to improve Minishell are welcome. If you find bugs or have suggestions for improvements, please fork the repository, make your changes, and submit a pull request.

## Author
[Bastien ERARD] - berard@student.42.fr
