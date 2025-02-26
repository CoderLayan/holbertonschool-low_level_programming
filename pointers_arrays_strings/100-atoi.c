#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a string to an integer
* @s: The string to convert
*
* Return: The integer value of the string
*/
int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int result = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > (UINT_MAX / 10) || (result == (UINT_MAX / 10) && (s[i] - '0') > (UINT_MAX % 10)))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
return ((int)(result * sign));
}
