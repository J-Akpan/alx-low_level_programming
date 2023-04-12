#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int m = 0, n = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (m < ac)
	{
		while (av[m][n])
		{
			z++;
			n++;
		}
		n = 0;
		m++;

	}

	s = malloc((sizeof(char) * z) + ac + 1);

	m = 0;
	while (av[m])
	{
		while (av[m][n])
		{
			s[y] = av[m][n];
			y++;
			n++;
		}
		s[y] = '\n';

		n = 0;
		y++;
		m++;
	}
	y++;
	s[y] = '\0';
	return (s);

}
