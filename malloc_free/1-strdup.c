#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
*           which contains a copy of the string given as a parameter
* @str: string to be duplicated
*
* Return: pointer to the duplicated string, or NULL if str = NULL or
*         if insufficient memory was available
*/
char *_strdup(char *str)
{
char *dup_str;
size_t len;

if (str == NULL)
return (NULL);
len = strlen(str);
dup_str = malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
strcpy(dup_str, str);
return (dup_str);
}

