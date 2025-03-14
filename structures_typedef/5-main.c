#include <stdio.h>
#include "dog.h"

/**
* main - Tests the free_dog function.
*
* Return: Always 0.
*/
int main(void)
{
dog_t *my_dog;
my_dog = new_dog("Poppy", 3.5, "Bob");
if (my_dog == NULL)
{
printf("Failed to create dog\n");
return (1);
}
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
/* Free the allocated memory */
free_dog(my_dog);
return (0);
}
