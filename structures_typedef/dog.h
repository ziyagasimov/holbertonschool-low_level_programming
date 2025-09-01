#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to store information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new type name for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */

/**
 * init_dog - initializes a struct dog variable
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - prints information of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: If d is NULL, nothing is printed.
 *              If d->name or d->owner is NULL, (nil) is printed instead.
 */
void print_dog(dog_t *d);

#endif /* DOG_H */
