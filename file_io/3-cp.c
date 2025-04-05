#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
* error_exit - Prints error message and exits with a code.
* @code: The exit code.
* @msg: The error message.
* @fd: The file descriptor to close (use -1 if no file descriptor to close).
*/
void error_exit(int code, const char *msg, int fd)
{
if (fd != -1)
close(fd);

dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}

/**
* main - Copies the content of one file to another.
* @argc: Number of arguments passed.
* @argv: Argument vector (contains filenames).
*
* Return: 0 on success, exits with an error code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

/* Validate argument count */
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to", -1);

/* Open file_from */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file", -1);

/* Open file_to */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
error_exit(99, "Error: Can't write to file", fd_from);

/* Read from file_from and write to file_to */
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
error_exit(99, "Error: Can't write to file", fd_from);
}
if (bytes_read == -1)
error_exit(98, "Error: Can't read from file", fd_from);

/* Close file_from */
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd_from", -1);

/* Close file_to */
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd_to", -1);

return (0);
}
