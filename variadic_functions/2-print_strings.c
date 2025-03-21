#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings followed by a new line.
* @separator: The string to be printed between the strings.
* @n: The number of strings passed to the function.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings is NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

/* Initialize the variadic argument list */
va_start(args, n);

for (i = 0; i < n; i++)
{
/* Retrieve the next string */
str = va_arg(args, char *);

/* Print the string or (nil) if it's NULL */
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

/* Print the separator if it's not NULL and not the last string */
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

/* End variadic argument processing */
va_end(args);

/* Print a new line at the end */
printf("\n");
}
