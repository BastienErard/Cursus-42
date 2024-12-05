# Push_Swap

`Push_Swap` is a project from 42 Network that involves creating a sorting algorithm using two stacks. The main objective is to sort data on stack A, with the smallest number at the top, using the smallest number of operations and only a set of specified operations.

## Project Overview

The goal of `Push_Swap` is to implement a sorting algorithm using two stacks (`A` and `B`). The project challenges students to think about algorithmic efficiency and complexity, particularly in terms of how operations can be minimized to achieve the end result.

## How It Works

- **Stack A**: Contains a random list of integers without duplicates that needs to be sorted.
- **Stack B**: Initially empty, this stack is used to hold push and swap operations that help in sorting stack A.

## Operations Allowed

- `sa` (swap a): Swap the first two elements at the top of stack A.
- `sb` (swap b): Swap the first two elements at the top of stack B.
- `ss`: `sa` and `sb` at the same time.
- `pa` (push a): Take the first element from the top of stack B and put it at the top of stack A.
- `pb` (push b): Take the first element from the top of stack A and put it at the top of stack B.
- `ra` (rotate a): Shift up all elements of stack A by 1. The first element becomes the last one.
- `rb` (rotate b): Shift up all elements of stack B by 1. The first element becomes the last one.
- `rr`: `ra` and `rb` at the same time.
- `rra` (reverse rotate a): Shift down all elements of stack A by 1. The last element becomes the first one.
- `rrb` (reverse rotate b): Shift down all elements of stack B by 1. The last element becomes the first one.
- `rrr`: `rra` and `rrb` at the same time.

## Getting Started

### Prerequisites

To compile and use `push_swap`, ensure you have:
- GCC compiler
- Make build tool

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
   ```
2. **Navigate to the Push_Swap directory:**

   ```bash
   cd Cursus-42/5\ -\ Push_Swap
   ```

3. **Compile the project:**

   ```bash
   make
   ```

This will create an executable named `push_swap`.

## Usage
To run the program:

   ```bash
   ./push_swap 4 67 3 87 23
   ```
This command will output a series of operations that sort the numbers provided as arguments in ascending order using the least number of moves.

## Testing
- Test with random numbers.
- Use scripts to generate large numbers of operations to ensure efficiency.
- Analyze the number of operations used for various scenarios to measure the efficiency of your algorithms.

## Contributions
Contributions to improve `push_swap` are welcome. Please fork the repository, make your changes, and submit a pull request.

## Author
[Bastien ERARD] - berard@student.42.fr
