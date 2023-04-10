#include "main.h"

/**
 * _islower - program to print the lower number
 * @c: The character to be checked.
 * Return: 0 always
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
