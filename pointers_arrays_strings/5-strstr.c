#include "main.h"
#include <stddef.h> /* For NULL definition */

/**
* _strstr - Locates a substring.
* @haystack: The string to search.
* @needle: The substring to find.
*
* Return: Pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (!*n)
{
return (haystack);
}
haystack++;
}
return (NULL);
}
