#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)

		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)

		return (NULL);

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = strcpy(new_dog->owner, owner);

	return (new_dog);
}
