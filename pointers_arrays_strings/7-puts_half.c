#include "main.h"

/**
* puts_half - prints half of a string
* @str: the string to be printed
*
* Description: If the number of characters is odd, the function
*              should print the last n characters of the string,
*              where n = (length_of_the_string + 1) / 2.
*/
void puts_half(char *str)
{
int len = 0, n;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
