#include "main.h"
#include <stdlib.h>

/**
 * Description: *create_array - array of chars, and initializeschar
 *
 * @size: parameter 1
 * @c: paramameter 2
 *
 * Return: ptr to array if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
