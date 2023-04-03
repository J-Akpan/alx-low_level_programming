#include "main.h"

/**
 * *_memset  - fill memory with constant
 * @s: parameter 1
 * @b: parameter 2
 * #n: parameter 3
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
	*i++ = b;
	}
	return (s);
}
