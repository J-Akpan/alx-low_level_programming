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
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";


	/*check to see if memeber is nil, else print member*/
	printf("Name: %s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
