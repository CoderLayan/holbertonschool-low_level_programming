#include "main.h"

/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
*
* Return: 1 if the character is a separator, 0 otherwise.
*/
int is_separator(char c)
{
/* List of separators */
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

/* Traverse the string */
while (str[i] != '\0')
{
/* Check if the character is at the start or follows a separator */
if (i == 0 || is_separator(str[i - 1]))
{
/* Convert to uppercase if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
i++;
}

return (str);
}
