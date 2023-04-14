#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: *string_nconcat - fn to concatenate string
 *
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 *
 * Return: string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s_out;
	unsigned int d1, d2, dout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d1 = 0; s1[d1] != '\0'; d1++)
		;
	for (d2 = 0; s2[d2] != '\0'; d2++)
		;

	if (n > d2)
		n = d2;

	dout = d1 + n;

	s_out = malloc(dout + 1);

	if (s_out == NULL)
		return (NULL);

	for (i = 0; i < dout; i++)
		if (i < d1)
			s_out[i] = s1[1];
		else
			s_out[i] = s2[i - d1];

	s_out[i] = '\0';

	return (s_out);
}
