#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers and prints the result
* @argc: Argument count
* @argv: Argument vector (array of strings)
*
* Return: 0 if two arguments are passed, 1 otherwise
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3) /* Ensure two numbers are provided */
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]); /* Convert first argument to integer */
num2 = atoi(argv[2]); /* Convert second argument to integer */
result = num1 *num2; /* Perform multiplication */
printf("%d\n", result);
return (0);
}
