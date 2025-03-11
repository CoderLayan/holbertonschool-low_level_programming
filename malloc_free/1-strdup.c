#include "main.h"
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated memory
*           containing a copy of the string str.
* @str: The string to duplicate.
*
* Return: Pointer to the duplicated string, or NULL if str is NULL
*         or if memory allocation fails.
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;
/* Return NULL if str is NULL */
if (str == NULL)
return (NULL);
/* Calculate the length of the string */
while (str[len])
len++;
/* Allocate memory for the duplicate string */
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
/* Copy the string into the new memory */
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
