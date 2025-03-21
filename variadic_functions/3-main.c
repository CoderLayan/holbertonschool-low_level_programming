#include "variadic_functions.h"
#include <stddef.h> /* For the definition of NULL */

/**
* main - Test the print_all function.
*
* Return: Always 0.
*/
int main(void)
{
print_all("ceis", 'B', 3, "stSchool");
print_all("csif", 'A', NULL, 9.8, 100);
print_all("ci", 'X', 100);
return (0);
}
