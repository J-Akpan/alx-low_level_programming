#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * Description: main - program to add numbers
 *
 * @argc: parameter 1
 * @argv: parameter 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  i, x, sum;

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);

		if (!x)
		{
			printf("Error\n");
			return (1);
		}
		else if (x)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
