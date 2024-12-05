# Webserv

*Fully-functional HTTP/1.1 web server implemented in C++98.*

## Project Overview

**Webserv** is an HTTP server that strictly adheres to the HTTP/1.1 protocol and is crafted using C++98 standards. This project provides a deep dive into the functioning of web servers and explores the details of HTTP. Designed to be both educational and functional, it allows users to interact with a web server through a standard web browser.

## Key Features

- **HTTP/1.1 Compliance**: Ensures compatibility with the HTTP/1.1 protocol.
- **Multi-Connection Handling**: Utilizes `poll()` to manage multiple simultaneous connections efficiently.
- **Supported HTTP Methods**:
  - **GET**: Fetches and sends static files to the client.
  - **POST**: Receives data from the client and processes it as needed.
  - **DELETE**: Deletes specified resources on the server.
- **Non-blocking Operations**: Implements non-blocking I/O to handle file descriptors, enhancing server performance.
- **Configuration**: Easily customizable through a user-defined configuration file.
- **Error Handling**: Provides default error pages and manages HTTP error codes.
- **File Uploads and Static File Serving**: Handles uploading files to the server and serving static content.

## Installation

### Prerequisites

- **C++98 Compiler**: Ensure you have a C++98 compliant compiler such as g++ or clang.
- **GNU Make**: Required for building the project.

### Compilation

To compile Webserv, execute the following command in the terminal:

   ```bash
   make
   ```

This command builds the project and generates the `webserv` executable.

## Usage

To run Webserv, start the server with a specified configuration file:

   ```bash
   ./webserv [configuration file]
   ```

## Configuration File

The server's behavior, including server ports, routes, and error handling, can be customized through a configuration file. This file specifies the operational parameters and server settings. For detailed instructions on configuring your server, refer to the included configuration guide.

## Contributing
Contributions to Webserv are welcome! If you have ideas for improvements or have discovered bugs, please follow these steps:

- Fork the repository.
- Create a new branch for your features or fixes.
- Commit your changes with clear, descriptive messages.
- Push the branch to your fork.
- Submit a pull request with a comprehensive description of changes.
