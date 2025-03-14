#ifndef DOG_H
#define DOG_H
/**
* struct dog - A structure to store details about a dog.
* @name: The name of the dog (type: char *).
* @age: The age of the dog (type: float).
* @owner: The name of the dog's owner (type: char *).
*
* Description: A structure that contains information about a dog,
* including its name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};
/* Typedef for struct dog */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
