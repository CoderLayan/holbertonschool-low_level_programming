#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: The number of elements in the array.
* @size: The size of each element in bytes.
*
* Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
*         or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory;
unsigned int i, total_size;
/* Check for invalid inputs */
if (nmemb == 0 || size == 0)
return (NULL);
/* Calculate total memory size */
total_size = nmemb * size;
/* Allocate memory */
memory = malloc(total_size);
if (memory == NULL)
return (NULL);
/* Initialize allocated memory to zero */
for (i = 0; i < total_size; i++)
memory[i] = 0;
return (memory);
}
