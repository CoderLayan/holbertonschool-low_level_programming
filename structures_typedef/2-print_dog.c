#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - Prints the details of a struct dog.
* @d: Pointer to the struct dog to print.
*
* Description: Prints the details of the dog, including name, age,
*              and owner. If an element is NULL, it prints (nil).
*              If the struct pointer is NULL, nothing is printed.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
/* Print name */
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
/* Print age */
printf("Age: %f\n", d->age);
/* Print owner */
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
