#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max (inclusive).
* @min: The minimum value in the array.
* @max: The maximum value in the array.
*
* Return: Pointer to the newly created array, or NULL on failure.
*/
int *array_range(int min, int max)
{
int *array;
int i, size;
/* Return NULL if min > max */
if (min > max)
return (NULL);
/* Calculate the size of the array */
size = max - min + 1;
/* Allocate memory for the array */
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
