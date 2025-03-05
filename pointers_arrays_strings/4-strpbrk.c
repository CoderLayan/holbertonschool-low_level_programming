#include "main.h"
#include <stddef.h> /* For NULL definition */

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to search.
* @accept: The set of bytes to match.
*
* Return: Pointer to the first occurrence in s of any bytes from accept,
*         or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
