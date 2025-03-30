# Binary Conversion Project

This project demonstrates bit manipulation operations in C programming. Specifically, it includes functions to:

- Convert binary strings to unsigned integers (`binary_to_uint`).
- Utilize efficient techniques to process binary data.

## Requirements
- Ubuntu 20.04 LTS
- GCC Compiler with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty Style for code and documentation.

## Files
1. **main.h**:
   - Header file containing function prototypes and include guards.
2. **0-binary_to_uint.c**:
   - Function that converts a binary number to an unsigned integer.

## Usage
To test the functionality, compile and execute the `main.c` file alongside the project files. Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_conversion
./binary_conversion
