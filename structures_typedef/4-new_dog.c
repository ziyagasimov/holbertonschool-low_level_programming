#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new dog, or NULL on failure
 *
 * Description: Allocates memory for a new dog_t structure,
 * copies the name and owner strings manually using loops.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy = NULL;
	char *owner_copy = NULL;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Copy name manually */
	if (name != NULL)
	{
		for (i = 0; name[i]; i++)
			;
		name_copy = malloc(i + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; name[i]; i++)
			name_copy[i] = name[i];
		name_copy[i] = '\0';
	}

	/* Copy owner manually */
	if (owner != NULL)
	{
		for (i = 0; owner[i]; i++)
			;
		owner_copy = malloc(i + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		for (i = 0; owner[i]; i++)
			owner_copy[i] = owner[i];
		owner_copy[i] = '\0';
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
