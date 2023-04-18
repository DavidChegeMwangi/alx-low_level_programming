#include "dog.h"

/**
 * init_dog - This function initializes a structure of type dog
 *
 * @d: pointer to structure
 * @name: pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
