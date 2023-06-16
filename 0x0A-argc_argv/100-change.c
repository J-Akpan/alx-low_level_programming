#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - program to print number of coin
 *
 * @argc: parameter count
 * @argv: parameter 2
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, change, payment;
	int coins[] = {25, 10, 5, 2, 1};
	
	payment = atoi(argv[1]);
	if (argc < 2|| argc >2)
	{
		printf("Error\n");
		return (1);
	}
	else if (payment < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		change = coins[i] - atoi(*argv[1]);
	}
	printf("%d\n", 
	return (0);
}
