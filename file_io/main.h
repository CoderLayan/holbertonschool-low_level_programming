#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
* _putchar - Writes a character to standard output.
* @c: The character to print.
*
* Return: On success, returns the number of characters written.
*         On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed,
*         or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
