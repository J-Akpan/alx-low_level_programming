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
	int i;
	int multiply = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			int y = strtol(argv[i], NULL, 10);
			int z = strtol(argv[i], NULL, 10);

			multiply = y * z;
		}
	}
	printf("%d\n", multiply);
	return (0);
}
