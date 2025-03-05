#include "main.h"

/**
* _sqrt_recursion_helper - Helps find the natural square root recursively
* @n: The number to find the square root of
* @i: The current number being checked
*
* Return: The natural square root, or -1 if no natural square root exists
*/
int _sqrt_recursion_helper(int n, int i)
{
if (i * i == n) /* Base case: Found the square root */
return (i);
if (i * i > n) /* If i exceeds the number, no natural square root exists */
return (-1);

return (_sqrt_recursion_helper(n, i + 1)); /* Recursive step */
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
*
* Return: The natural square root, or -1 if no natural square root exists
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* Negative numbers don't have natural square roots */
return (-1);
return (_sqrt_recursion_helper(n, 0)); /* Start checking from 0 */
}
