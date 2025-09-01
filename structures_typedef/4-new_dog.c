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
 * copies the name and owner strings. Returns NULL if any
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_copy = (name != NULL) ? strdup(name) : NULL;
	owner_copy = (owner != NULL) ? strdup(owner) : NULL;

	if ((name != NULL && name_copy == NULL) ||
	    (owner != NULL && owner_copy == NULL))
	{
		free(name_copy);
		free(owner_copy);
		free(d);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
