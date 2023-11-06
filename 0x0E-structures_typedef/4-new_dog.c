#include "dog.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: gog's age
 * @owner: dog owner's name
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy;
	char *owner_cpy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	name_cpy = malloc(strlen(name) + 1);
	if (name_cpy == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_cpy, name);
	owner_cpy = malloc(strlen(owner) + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(dog);
		return (NULL);
	}
	strcpy(owner_cpy, owner);
	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}

