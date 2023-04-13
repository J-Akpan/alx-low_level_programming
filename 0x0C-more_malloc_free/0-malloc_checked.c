#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: *malloc_checked - allocation of memory
 *
 * @b: parameter
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
