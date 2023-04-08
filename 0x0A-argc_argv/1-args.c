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
	(void)argv;
	printf("%d\n", argc - 1);
	
	return (0);
}
