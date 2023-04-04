#include <stdio.h>

/**
 * Description: print_diagsums - print sum of diagonal
 *
 * @size: param 1
 * @a: paramm 2
 *
 * Return: 2
 */

void print_diagsums(int *a, int size)
{
	int i, a1 = 0, a2 = 0;

	for (i = 0; i < size; i++)
	{
		a1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		a2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", a1, a2);
}
