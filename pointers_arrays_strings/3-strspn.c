#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The initial segment of the string.
* @accept: The set of bytes to match in s.
*
* Return: The number of bytes in the initial segment of s
*         which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int match;

for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (match == 0)
{
break;
}
count++;
}
return (count);
}
