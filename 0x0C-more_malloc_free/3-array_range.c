#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: *array_range - fn to create array of int
 *
 * @min: param 1
 * @max: param 2
 *
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
