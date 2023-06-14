#include  "main.h"
#include <stdio.h>

/**
 * Description: main - function that print the number of argument
 *
 * @argc: parameter 1
 * @argv: parameter 2
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc >= 0)
		printf("%d\n", argc - 1);
	return (0);
}
