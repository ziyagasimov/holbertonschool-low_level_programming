#include "dog.h"
#include <stdlib.h>

/**
 * str_copy - manually copies a string
 * @str: string to copy
 *
 * Return: pointer to newly allocated copy, or NULL on failure
 */
char *str_copy(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = str_copy(name);
	d->owner = str_copy(owner);
	if ((name != NULL && d->name == NULL) ||
	    (owner != NULL && d->owner == NULL))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
