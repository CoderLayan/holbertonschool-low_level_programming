#include "variadic_functions.h"
#include <stddef.h> /* Include this to define NULL */

/**
* main - Tests the print_strings function.
*
* Return: Always 0.
*/
int main(void)
{
print_strings(", ", 2, "Jay", "Django");
print_strings("; ", 4, "This", NULL, "is", "cool");
print_strings(NULL, 3, "One", "Two", "Three");
return (0);
}
