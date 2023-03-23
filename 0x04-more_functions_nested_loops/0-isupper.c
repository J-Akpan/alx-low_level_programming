#include "main.h"

/**
 * Description: _isupper - compare codes.
 * @c: character to be checked
 * Return: 0 always.
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' || c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
