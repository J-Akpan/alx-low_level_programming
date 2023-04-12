#include "main.h"
#include <stdlib.h>

/**
 * Description: *argstostr - concatinat all arguments
 *
 * @ac: param 1
 * @av: param 2
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int m, n;
	int y = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			y++;
		}

		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}
	return (str);
}
