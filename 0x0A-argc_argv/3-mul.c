#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - program to multiply two numbers
 *
 * @argv: param 1
 * @argc: param 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiply;

	if (argc == 3)
	{
		int y = strtol(argv[1], NULL, 10);
		int z = strtol(argv[2], NULL, 10);

		multiply = y * z;
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
