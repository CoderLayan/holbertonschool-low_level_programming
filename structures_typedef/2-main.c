#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* simple_print_buffer - Prints buffer in hexadecimal.
* @buffer: The address of memory to print.
* @size: The size of the memory to print.
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
for (i = 0; i < size; i++)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
}
printf("\n");
}
/**
* main - Tests the _calloc function.
*
* Return: Always 0.
*/
int main(void)
{
char *a;
a = _calloc(98, sizeof(char));
if (a == NULL)
{
printf("Memory allocation failed\n");
return (1);
}
strcpy(a, "Best");
strcpy(a + 4, " School! :)\n");
a[97] = '!';
simple_print_buffer(a, 98);
free(a);
return (0);
}
