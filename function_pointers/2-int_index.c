#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array using a comparison function.
* @array: The array to search through.
* @size: The size of the array.
* @cmp: The comparison function to use.
*
* Return: The index of the first element for which the cmp function
*         does not return 0. If no elements match or size <= 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1); /* No match found */
}
