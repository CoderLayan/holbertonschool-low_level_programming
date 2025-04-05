#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* error_exit - Prints an error message and exits the program
* @code: The exit code to use
* @message: The error message format
* @file: The name of the file causing the error
*
* Return: Nothing (void)
*/
void error_exit(int code, const char *message, const char *file)
{
dprintf(STDERR_FILENO, message, file);
exit(code);
}

/**
* main - Copies the content of one file to another
* @argc: The number of arguments passed to the program
* @argv: An array of arguments (file names)
*
* Return: 0 on success
* Exits with code 97-100 on various errors
*/
int main(int argc, char *argv[])
{
int file_from, file_to, read_count, write_count;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", "");

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);

while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
write_count = write(file_to, buffer, read_count);
if (write_count != read_count)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

if (read_count == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

if (close(file_from) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[1]);

if (close(file_to) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
