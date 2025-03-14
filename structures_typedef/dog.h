#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to represent a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototypes */
void print_dog(struct dog *d);

#endif /* DOG_H */
