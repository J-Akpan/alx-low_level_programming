#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - Program to print the program name
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
		printf("%s\n",  argv[0]);
	}
	return (0);
}
