#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Tests the str_concat function.
*
* Return: Always 0.
*/
int main(void)
{
char *s;
/* Test: Concatenate "Best " and "School" */
s = str_concat("Best ", "School");
if (s == NULL)
{
printf("failed\n");
return (1);
}
/* Print the concatenated string */
printf("%s\n", s);
/* Free the allocated memory */
free(s);
return (0);
}
