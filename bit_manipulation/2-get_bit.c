#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to evaluate.
* @index: The index of the bit to retrieve, starting from 0.
*
* Return: The value of the bit at index (0 or 1), or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
/* Check if index is valid (within range of the number's bits) */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Isolate the bit using right shift and bitwise AND */
return ((n >> index) & 1);
}
