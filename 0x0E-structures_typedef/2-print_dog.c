#include "dog.h"

/**
 * print_dog - functikon to rint dog structure
 *
 * @d: param
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	/*stm to declear nil*/
	char *nil = "(nil)";

	/*check if d is NULL*/
	if (d == NULL)
		return;
	/*print the members of the structure*/
	printf("Name:%s\n", (d->name) ? d->name : nil);
	printf("Age: %f\n", d->age);
	pritf("Owner: %s\n", (d->owner) ? d->owner : nil);
}
