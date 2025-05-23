#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: The index of the bit to set, starting from 0.
*
* Return: 1 if successful, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is valid (within range of bits in unsigned long int) */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Create mask to clear the bit and apply it with bitwise AND */
*n &= ~(1 << index);

return (1);
}
