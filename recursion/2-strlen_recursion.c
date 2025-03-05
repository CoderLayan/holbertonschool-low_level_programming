#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string whose length to calculate
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: End of string */
return (0);
return (1 + _strlen_recursion(s + 1)); /* Add 1 for each character */
}
