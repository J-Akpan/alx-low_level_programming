#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * Description: main - currency exchange
 *
 * @argc: parameter 1
 * @argv: parameter 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, min_coin = 0, i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1 || argc > 2)
		{
			printf("Error\n");
			return (1);
		}
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		min_coin += 1;
	}
	printf("%d\n", min_coin);
	return (0);
}
