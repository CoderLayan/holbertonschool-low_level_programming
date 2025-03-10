#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars and initializes it with a char.
* @size: The size of the array.
* @c: The char to initialize the array with.
*
* Return: A pointer to the array, or NULL if size is 0 or malloc fails.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

/* Return NULL if size is 0 */
if (size == 0)
return (NULL);

/* Allocate memory for the array */
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

/* Initialize the array with the given character */
for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
