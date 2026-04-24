# ft_printf (Custom Implementation)

This is a custom implementation of the `printf` function in C, named `ft_printf`, developed as part of the `libft` library.

## Description

`ft_printf` is a variadic function that formats and prints data to the standard output according to a format string. It supports a subset of the format specifiers available in the standard `printf` function.

## Features

- Handles null pointers gracefully
- Supports the following format specifiers:
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%d`, `%i`: Signed integers
  - `%u`: Unsigned integers
  - `%x`: Hexadecimal (lowercase)
  - `%X`: Hexadecimal (uppercase)
  - `%%`: Percent sign

## Usage

To use `ft_printf`, include the header file `ft_printf.h` and link the library in your project.

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}

```

## Building
To build ft_printf, simply compile the source files along with your project:

  ```bash
gcc -o my_program my_program.c ft_printf.c [other_source_files.c] -I.
  ```
