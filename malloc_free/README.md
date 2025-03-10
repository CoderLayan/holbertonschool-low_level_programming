# 0x0A. malloc, free

## Description
This project is part of the Holberton School curriculum. It focuses on dynamic memory allocation in C using `malloc` and `free`. The goal is to understand how to manage memory manually and avoid memory leaks.

## Project Tasks
### 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars and initializes it with a specific char.

- **Prototype:** `char *create_array(unsigned int size, char c);`
- **Returns:** `NULL` if `size` is `0` or if memory allocation fails.
- **Returns:** A pointer to the array if successful.

### Example
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
