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

	for (i = 1; i < argc; i++)
	{
		int y = strtol(argv[i], NULL, 10);
		multiply = multiply * y;
	}
	printf("%d\n", multiply);
	return (0);
}
