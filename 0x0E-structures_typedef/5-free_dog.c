#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the dog
 * @d: dog parameter
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
