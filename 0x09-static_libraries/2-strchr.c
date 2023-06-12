#include "main.h"

/**
 * Description: *_strchr - function to locate character
 *
 * @c: param1
 * @s: param2
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
