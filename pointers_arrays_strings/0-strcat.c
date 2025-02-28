#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string to which the source string is appended.
* @src: The source string to append to dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int i = 0; /* Index for the dest string */
int j = 0; /* Index for the src string */

/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}
/* Append src to dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
/* Add the terminating null byte */
dest[i] = '\0';
return (dest);
}
