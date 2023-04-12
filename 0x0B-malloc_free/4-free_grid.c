#include "main.h"
#include <stdlib.h>

/**
 * Description: free_grid - function to free allocated memory
 *
 * @grid: parameter 1
 * @height: parameter 2
 *
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
