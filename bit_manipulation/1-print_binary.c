#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to print in binary.
*/
void print_binary(unsigned long int n)
{
if (n > 1) /* Recursively shift and print */
print_binary(n >> 1);

/* Print the last bit using bitwise AND with 1 */
_putchar((n & 1) + '0');
}
