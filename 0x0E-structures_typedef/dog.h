#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Data type of a dog.
 * @name: Name of Dog.
 * @age: Age of Dog.
 * @owner: Owner of Dog.
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
