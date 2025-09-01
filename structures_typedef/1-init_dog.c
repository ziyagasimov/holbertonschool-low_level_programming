#include "dog.h"
#include <stddef.h>

/**
 * init_dog - struct dog dəyişənini initialize edir
 * @d: struct dog-a pointer
 * @name: itin adı
 * @age: itin yaşı
 * @owner: sahibinin adı
 *
 * Description: Bu funksiya verilən @name, @age və @owner
 * dəyərlərini struct dog tipli dəyişənə mənimsədir.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
