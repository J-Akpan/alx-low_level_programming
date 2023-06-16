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
	int coins[] = {25, 10, 5, 2, 1};
	int num, i, ans;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	ans = 0;
	if (num < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			ans++;
			num -= coins[i];
		}
	}
	printf("%d\n", ans);
	return (0);
}
