#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new dog, or NULL on failure
 *
 * Description: Allocates memory for a new dog_t structure,
 * copies the name and owner strings manually. Returns NULL if any
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy = NULL;
	char *owner_copy = NULL;
	size_t name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_len = strlen(name) + 1;
		name_copy = malloc(name_len);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		strcpy(name_copy, name);
	}

	if (owner != NULL)
	{
		owner_len = strlen(owner) + 1;
		owner_copy = malloc(owner_len);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		strcpy(owner_copy, owner);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
