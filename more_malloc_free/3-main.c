#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* simple_print_buffer - Prints buffer in hexadecimal format.
* @buffer: The address of the memory to print.
* @size: The size of the memory to print.
*
* Return: Nothing.
*/
void simple_print_buffer(int *buffer, unsigned int size)
{
unsigned int i;
for (i = 0; i < size; i++)
{
if (i % 10)
printf(" ");
if (!(i % 10) && i)
printf("\n");
printf("0x%02x", buffer[i]);
}
printf("\n");
}
/*
* main - Tests the array_range function.
*
* Return: Always 0.
*/
int main(void)
{
int *a;
a = array_range(0, 10);
if (a == NULL)
{
printf("Memory allocation failed\n");
return (1);
}
simple_print_buffer(a, 11);
free(a);
return (0);
}
