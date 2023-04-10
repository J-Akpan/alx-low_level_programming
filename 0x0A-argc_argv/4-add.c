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
	int  i, x, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			x = isdigit(argv[i][j]);

			if (!x)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += strtol(argv[i], NULL, 10);
	}
	printf("%d\n", sum);
	return (0);
}
