#include "main.h"
#include <stdio.h>

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
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
