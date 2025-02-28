#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string to which the source string is appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0; /* Index for dest */
int j = 0; /* Index for src */
/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}
/* Append at most n bytes of src to dest */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
/* Add the terminating null byte */
dest[i] = '\0';
return (dest);
}
