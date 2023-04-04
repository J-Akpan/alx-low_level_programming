#include "main.h"

/**
 * Description: int _strspn - function to get the kenght of
 * prefix
 * 
 * @s: param 1
 * @accept: param 2
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	char *i = s;

	while (*i)
	{
		char *u = accept;

		while (*u && *u != *i)
		{
		u++;
		}

		if (*u == '\0')
		{
			break;
		}
		i++;
	}
	return (i - s);
}
