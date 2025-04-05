#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
* error_exit - Prints error message and exits with a code.
* @code: The exit code.
* @msg: The error message.
* @fd: The file descriptor to close (use -1 if no file descriptor to close).
*/
void error_exit(int code, const char *msg, int fd);

#endif /* MAIN_H */
