# Minitalk

A 42 school project about inter-process communication using UNIX signals. This project involves creating a communication program between a client and a server using only UNIX signals.

## Project Overview

The goal is to create a small data exchange program that consists of a server and a client:
- The server must display its PID at launch and wait for signals from clients
- The client takes two parameters: the server's PID and a string to send
- The client must send the string to the server
- The server must display the received string

### Features

- Server-client communication using UNIX signals
- Fast and reliable string transmission
- Support for multiple clients
- Signal handling with SIGUSR1 and SIGUSR2
- Memory efficient implementation

## Technical Details

### Compilation

The project is compiled using the following flags:
```bash
make
```

The compilation produces two executables: `server` and `client`.

### Usage

First, start the server:
```bash
./server
```
The server will display its PID.

Then, in another terminal, run the client:
```bash
./client [server_pid] [string_to_send]
```

## Project Structure

```
.
├── Makefile
├── client.c
├── client_bonus.c
├── minitalk.h
├── minitalk_bonus.h
├── server.c
└── server_bonus.c
```

## Constraints

- Only the following functions are allowed:
  - write
  - ft_printf (your own implementation)
  - signal
  - sigemptyset
  - sigaddset
  - sigaction
  - kill
  - getpid
  - malloc
  - free
  - pause
  - sleep
  - usleep
  - exit
- Only SIGUSR1 and SIGUSR2 signals can be used
- One global variable per program (server/client) is allowed if justified
- Program must handle errors appropriately
- No memory leaks
- Must comply with 42's Norm

## Bonus Features

The bonus part includes:
- Server acknowledges every message received by sending a signal back to the client
- Support for Unicode characters

## Author

[Bastien ERARD] - berard@student.42.fr
