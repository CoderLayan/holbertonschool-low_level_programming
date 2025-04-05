#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h> /* Include for strlen */

/**
* create_file - Creates a file with specified name and content.
* @filename: The name of the file to create.
* @text_content: The NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;

/* Validate filename */
if (!filename)
return (-1);

/* Open file for writing (create if not exists, truncate if exists) */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

/* Write text_content to the file if it is not NULL */
if (text_content)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}

/* Close the file */
close(fd);
return (1);
}
