#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h> /* Include for strlen */

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file to append text to.
* @text_content: The NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;

/* Validate filename */
if (!filename)
return (-1);

/* Open the file for writing in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
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
