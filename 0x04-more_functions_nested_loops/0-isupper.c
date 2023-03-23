#include "main.h"

/**
 * Description: _isupper - compare codes.
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
	}
}
