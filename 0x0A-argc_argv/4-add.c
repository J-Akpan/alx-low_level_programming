#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * Description: main - functiokn to print program name
 *
 * @argc: parameter count
 * @argv: parameter 2
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int sum, i;

	for (i = 1; i < argc; i++)
	{
		if (argc == 0 || argc < 2)
		{
			return (0);
		}
		else if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum   += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
