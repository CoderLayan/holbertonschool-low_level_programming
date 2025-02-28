#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[] = "Hello";
char s2[] = "World!";
printf("%d\n", _strcmp(s1, s2));  /* Expected Output: -15 */
printf("%d\n", _strcmp(s2, s1));  /* Expected Output: 15 */
printf("%d\n", _strcmp(s1, s1));  /* Expected Output: 0 */
return (0);
}
