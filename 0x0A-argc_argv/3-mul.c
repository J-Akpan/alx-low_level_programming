#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - program to multipy two numbers
 *
 * @argc: parameter count
 * @argv: parameter 2
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
