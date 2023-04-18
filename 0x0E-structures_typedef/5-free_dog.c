#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees the dog
 * @d: dog parameter
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->name);
		free(d);
	}
}
