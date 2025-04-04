#include "main.h"

/**
* flip_bits - Returns the number of bits you need to flip to get from
*             one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: Number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m; /* XOR operation */
unsigned int count = 0;

while (xor_result)
{
count += xor_result & 1; /* Count the set bits */
xor_result >>= 1; /* Shift right to check the next bit */
}

return (count);
}
