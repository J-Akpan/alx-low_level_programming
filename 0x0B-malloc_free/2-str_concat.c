#include "main.h"
#include <stdlib.h>

/**
 * Description: *str_concat - function that concatenates two strings
 *
 * @s1: param 1
 * @s2: param2
 *
 * Return: null if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
		i = j = 0;
	}

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
