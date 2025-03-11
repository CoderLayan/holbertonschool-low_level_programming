#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n bytes of s2.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate.
*
* Return: Pointer to the newly allocated memory containing the concatenated
*         string, or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i, j;
/* Treat NULL as an empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate the lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;
/* Use the entire s2 if n >= len2 */
if (n >= len2)
n = len2;
/* Allocate memory for the concatenated string */
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);
/* Copy s1 into result */
for (i = 0; i < len1; i++)
result[i] = s1[i];
/* Copy up to n bytes of s2 into result */
for (j = 0; j < n; j++)
result[i + j] = s2[j];
/* Null-terminate the concatenated string */
result[i + j] = '\0';
return (result);
}
