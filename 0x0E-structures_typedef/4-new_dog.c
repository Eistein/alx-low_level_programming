#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;

	if (name == NULL || owner == NULL)
	{
	return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
	free(new_dog);
	free(new_name);
	return (NULL);
	}
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
