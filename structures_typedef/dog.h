#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Ensure this is included for NULL */

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototype */
typedef struct dog dog_t;

#endif /* DOG_H */
