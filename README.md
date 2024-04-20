# Custom Printf Implementation (ft_printf)

This is a custom implementation of the `printf` function in C, named `ft_printf`, developed as part of the `libft` library.

## Description

`ft_printf` is a variadic function that formats and prints data to the standard output according to a format string. It supports a subset of the format specifiers available in the standard `printf` function.

## Features

- Supports the following format specifiers:
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%d`, `%i`: Signed integers
  - `%u`: Unsigned integers
  - `%x`: Hexadecimal (lowercase)
  - `%X`: Hexadecimal (uppercase)
  - `%%`: Percent sign

- Additional features:
  - Handles null pointers gracefully
  - Properly handles width and precision specifiers (not yet implemented)

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

## Authors
  Boussaden TAHA [tn_ix77]
  
## Contact

If you have any questions, suggestions, or issues, feel free to contact the project maintainer:

- Boussaden Taha
- tahaboussaden7322@gmail.com
