#include <stdio.h>
#include <stdlib.h>

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
	int  i;
	int sum;

	for (i = 0; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
