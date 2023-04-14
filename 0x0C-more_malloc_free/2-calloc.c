#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: *_memset - reset memory
 *
 * @s: param 1
 * @s: param 2
 * @n: param 3
 * @b: param 4
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * Description: *_calloc - fn to print a pointer
 *
 * @nmemb: param 1
 * @size: param 2
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
