#include "main.h"

/**
 * Description: print_chessboard - print chess board
 *
 * @a: param to be checked
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
