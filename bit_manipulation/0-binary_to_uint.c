#include "main.h"
#include <stddef.h> /* For NULL */

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if:
*         - There is one or more chars in the string b that is not 0 or 1.
*         - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (b == NULL) /* Check if the input string is NULL */
return (0);

for (i = 0; b[i] != '\0'; i++) /* Loop through each character */
{
if (b[i] != '0' && b[i] != '1') /* Validate binary characters */
return (0);

result = result * 2 + (b[i] - '0'); /* Convert binary to decimal */
}

return (result);
}
