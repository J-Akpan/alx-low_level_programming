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
	/*stmt to declare nil*/
	char *nil = "(nil)";

	/*check if d is NULL*/
	if (d == NULL)
		return;

	/*check to see if memeber is nil, else print member*/
	printf("Name:%s\n", (d->name) ? d->name : nil);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : nil);
}
