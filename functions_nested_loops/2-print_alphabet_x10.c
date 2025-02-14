#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, followed by a new line
 *
 * Description: This function prints the alphabet in lowercase 10 times, with each iteration
 * of the alphabet followed by a new line. It uses the _putchar function to print characters.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
 _putchar('\n');
}}
