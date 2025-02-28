#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
int i, j;

/* Mapping of characters to 1337 equivalents */
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";

/* Traverse the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Loop through the mapping array */
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j];
break;
}
}
}

return (str);
}
