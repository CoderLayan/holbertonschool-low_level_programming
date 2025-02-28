#include "main.h"
#include <stdio.h>

/**
 * main - Tests the _atoi function.
 *
 * Return: Always 0.
 */
int main(void)
{
printf("%d\n", _atoi("98")); /* Expected: 98 */
printf("%d\n", _atoi("-402")); /* Expected: -402 */
printf("%d\n", _atoi("   ------++++++-----+++++--98")); /* Expected: -98 */
printf("%d\n", _atoi("2147483647")); /* Expected: 2147483647 */
printf("%d\n", _atoi("-2147483648")); /* Expected: -2147483648 */
printf("%d\n", _atoi("0")); /* Expected: 0 */
printf("%d\n", _atoi("Suite 402")); /* Expected: 402 */
printf("%d\n", _atoi("---++++ -++ 402 #cisfun :)")); /* Expected: 402 */
return (0);
}
