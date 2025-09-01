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

#endif /* DOG_H */
