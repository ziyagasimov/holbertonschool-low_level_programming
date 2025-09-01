#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it haqqında məlumat saxlamaq üçün struktur
 * @name: itin adı
 * @age: itin yaşı
 * @owner: sahibinin adı
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Burada prototip əlavə olunmalıdır */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
