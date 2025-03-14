#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* _strlength - Calculates the length of a string.
* @str: The string whose length is to be calculated.
*
* Return: The length of the string.
*/
int _strlength(char *str)
{
int len = 0;
while (str[len] != '\0')
len++;
return (len);
}
/**
* _strcopy - Copies a string from source to destination.
* @dest: Destination buffer.
* @src: Source string.
*
* Return: Pointer to the destination buffer.
*/
char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The name of the dog's owner.
*
* Return: Pointer to the new dog_t structure, or NULL if allocation fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
/* Allocate memory for the dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate and copy the name */
new_name = malloc(_strlength(name) + 1);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
_strcopy(new_name, name);
/* Allocate and copy the owner */
new_owner = malloc(_strlength(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
_strcopy(new_owner, owner);
/* Initialize the dog structure */
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
return (new_dog);
}
