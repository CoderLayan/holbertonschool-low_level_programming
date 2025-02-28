#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The integer value of the string, or 0 if no valid number exists.
*/
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int result = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = (result * 10) + (s[i] - '0');
if (result > 2147483647 && sign == 1)
return (2147483647);
if (result > 2147483648 && sign == -1)
return (-2147483648);
i++;
}
return (sign *result);
}
