#include "main.h"

/**
 * Description: *_strstr - locate a sub string
 *
 * @needle: param 1
 * @haystack: param 2
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int u;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		u = 0;

		if (haystack[u] == needle[u])
		{
			do {
				if (needle[u + 1] == '\0')
				{
					return (haystack);
				}
				u++;
			} while (haystack[u] == needle[u]);
		}
		haystack++;
	}
	return ('\0');
}
