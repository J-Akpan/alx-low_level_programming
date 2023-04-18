#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to rint dog structure
 *
 * @d: param
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	/*check if d is NULL*/
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf(d->name = "Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf(d->age = "Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf(d->owner = "Owner (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
