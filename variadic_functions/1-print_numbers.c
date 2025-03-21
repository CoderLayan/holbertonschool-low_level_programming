#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers separated by a string.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*
* Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
/* Initialize the argument list */
va_start(args, n);
for (i = 0; i < n; i++)
{
/* Retrieve and print the current number */
printf("%d", va_arg(args, int));
/* Print the separator if it's not NULL and not the last number */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
/* End the variadic argument processing */
va_end(args);
/* Print a new line at the end */
printf("\n");
}
