#include <stdio.h>
#include "main.h"

/**
* main - Check the code for the clear_bit function.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int n;

n = 1024;
clear_bit(&n, 10);
printf("%lu\n", n); /* Expected output: 0 */
n = 0;
clear_bit(&n, 10);
printf("%lu\n", n); /* Expected output: 0 */
n = 98;
clear_bit(&n, 1);
printf("%lu\n", n); /* Expected output: 96 */
return (0);
}
