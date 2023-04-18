#include "dog.h"

/**
 * init_dog - function to initialize dog structure
 * @d: pointer to dog structure
 * @name: name for the puppy
 * @age: puppy age
 * @owner: member for puppy owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*check if pointer @d is not null*/

	if (!d)
		return;

	/*if d is not NULL,initialize i*/

	d->name = name;
	d->age = age;
	d->owner = owner;
}
