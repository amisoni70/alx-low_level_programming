#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialises a varaible of type struct dog
 * @d: pointer to struct dog to initialise
 * @name: name to initailise
 * @age: age to initalise
 * @owner: owner to initialse
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
