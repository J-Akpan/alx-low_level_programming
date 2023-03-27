#include "main.h"

/**
 * Description: _strlen - string legth
 *
 * @s: parameter to check
 * Return: 0 on success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

