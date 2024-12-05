# Philosophers

`Philosophers` is a project from the 42 curriculum designed to teach the basics of threading a process and how to work with mutexes. It simulates the classic dining philosophers problem to explore issues of concurrency and synchronization.

## Project Overview

The goal of the Philosophers project is to create a simulation where multiple threads (philosophers) interact with shared resources (forks) while avoiding common issues like deadlock and starvation. Each philosopher must alternate between eating, thinking, and sleeping without causing the system to lock up.

## Problem Statement

- Several philosophers sit at a round table.
- A fork is placed between each pair of adjacent philosophers.
- Each philosopher needs two forks to eat.
- Philosophers must never starve.
- Every philosopher needs to eat and then sleep, repeatedly.
- The simulation stops when a philosopher dies of starvation.

## Simulation Rules

- Philosophers alternate between thinking, eating, and sleeping.
- A philosopher can only pick up forks when they are available on both sides.
- After eating for a certain period, they must put down the forks and start sleeping.
- After sleeping, they start thinking, and the cycle repeats.
- The challenge is to implement this without any philosopher starving to death.

## Technical Overview

The simulation uses threads to represent each philosopher and mutexes (or semaphores) to manage the forks as shared resources.

## Installation

### Prerequisites

To run the `Philosophers` project, you need:
- A Unix-based operating system (Linux, MacOS).
- GCC compiler.
- Make build tool.

### Clone and Compile

1. **Clone the repository:**

   ```bash
   git clone https://github.com/BastienErard/Cursus-42.git
   ```

2. **Navigate to the Philosophers directory:**

   ```bash
   cd Cursus-42/7\ -\ Philosophers
   ```

3. **Compile the project:**

   ```bash
   make
   ```

This will generate the executable needed for the simulation.

## Usage

Run the simulation by executing the program:

   ```bash
   ./philo
   ```

Parameters such as the number of philosophers, time to eat, time to sleep, and time to die can be adjusted within the program code or passed as arguments to customize the behavior of the simulation.

## Testing

Run various scenarios to ensure that:

- No philosophers starve.
- Mutexes are used appropriately without deadlock.
- All threads terminate correctly at the end of the simulation.

## Contributions
Contributions to improve `Philosophers` are welcome. Please fork the repository, make your changes, and submit a pull request.

## Author
[Bastien ERARD] - berard@student.42.fr
