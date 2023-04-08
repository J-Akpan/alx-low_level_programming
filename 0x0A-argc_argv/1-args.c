#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - printing the number of argument
 *
 * @argc: param 1
 * @argv: param 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void)argv;
		printf("%d\n", argc);
	}
	return (0);
}
