#include "main.h"

/**
* is_prime_helper - Checks if a number is divisible by any number less than it
* @n: The number to check
* @i: The divisor being tested
*
* Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
if (i == 1) /* Base case: reached 1 without finding any divisors */
return (1);
if (n % i == 0) /* If n is divisible by i, it's not a prime number */
return (0);

return (is_prime_helper(n, i - 1)); /* Recursive step */
}
/**
* is_prime_number - Determines if a number is a prime number
* @n: The number to check
*
* Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1) /* Numbers less than or equal to 1 are not prime */
return (0);
return (is_prime_helper(n, n - 1)); /* Start checking from n-1 */
}
