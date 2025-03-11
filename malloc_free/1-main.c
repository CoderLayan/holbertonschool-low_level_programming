#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Tests the _strdup function.
*
* Return: Always 0.
*/
int main(void)
{
char *s;
/* Duplicate the string "Duplicated" */
s = _strdup("Duplicated");
if (s == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
/* Print the duplicated string */
printf("%s\n", s);
/* Free the allocated memory */
free(s);
return (0);
}
