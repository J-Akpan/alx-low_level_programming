#include "main.h"
#include <stdlib.h>

/**
 * Description: *_strdup -  returns a pointer to a new space
 *
 * @str: parameter to check
 *
 * Return: pointer string
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}
