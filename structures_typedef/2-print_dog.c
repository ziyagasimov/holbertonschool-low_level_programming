#include "dog.h"
#include <stdio.h>

/**
 * print_dog - struct dog dəyişənini çap edir
 * @d: çap olunacaq struct dog-a pointer
 *
 * Description: Əgər d NULL-dursa, heç nə çap etmir.
 * Əgər d->name və ya d->owner NULL-dursa, (nil) çap edir.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
