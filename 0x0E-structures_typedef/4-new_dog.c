#include "dog.h"

/**
 * new_dog - Creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: Owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *t_name;
	char *t_owner;
	dog_t *new_dogg;

	t_name = malloc(sizeof(*name) * (strlen(name) + 1));
	t_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_dogg = malloc(sizeof(dog_t));

	if (t_name && t_owner && new_dogg)
	{
		strcpy(t_name, name);
		strcpy(t_owner, owner);
		new_dogg->name = t_name;
		new_dogg->age = age;
		new_dogg->owner = t_owner;
	}
	else
	{
		free(t_name);
		free(t_owner);
		free(new_dogg);
		return (NULL);
	}
	return (new_dogg);
}
