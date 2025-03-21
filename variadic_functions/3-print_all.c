#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints anything based on the format string.
* @format: A list of types of arguments passed to the function.
*
* Description:
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, prints "(nil)")
* Other characters are ignored.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *separator = "";

/* Initialize the argument list */
va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}

/* End variadic argument processing */
va_end(args);

/* Print a new line at the end */
printf("\n");
}
