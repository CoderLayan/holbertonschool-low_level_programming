#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: The string to be reversed
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: End of the string */
return;
_print_rev_recursion(s + 1); /* Recursive call to the next character */
_putchar(*s); /* Print the current character after the recursive call */
}

