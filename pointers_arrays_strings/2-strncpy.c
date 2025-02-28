#include "main.h"

/**
* _strncpy - Copies a string.
* @dest: The destination buffer where the string is copied.
* @src: The source string to copy.
* @n: The maximum number of bytes to copy from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Copy src to dest up to n bytes or until null byte */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* If src is shorter than n, pad dest with null bytes */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
