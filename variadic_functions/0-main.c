#include <stdio.h>
#include "variadic_functions.h"

/**
* main - Test the sum_them_all function.
*
* Return: Always 0.
*/
int main(void)
{
int sum;

sum = sum_them_all(2, 98, 1024);
printf("%d\n", sum); /* Expected output: 1122 */

sum = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", sum); /* Expected output: 500 */

return (0);
}
