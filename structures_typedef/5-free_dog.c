#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for the
 * dog structure, including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free name and owner strings if they exist */
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	/* Free the struct itself */
	free(d);
}
