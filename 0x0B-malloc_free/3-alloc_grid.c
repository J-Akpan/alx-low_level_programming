#include "main.h"
#include <stdlib.h>

/**
 * Description: **alloc_grid -  function that returns a pointer to array
 *
 * @width: param 1
 * @height: param 2
 *
 * Return: pointers arrays.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(sizeof(int) * width);

		if (ptr[m] == NULL)
		{
			for (; m >= 0; m--)
				free(ptr[m]);
			free(ptr);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			ptr[m][n] = 0;
	}
	return (ptr);


}
