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
	int i, change, ans;
	int coins[] = {25, 10, 5, 2, 1};
	
	change = atoi(argv[1]);
	if (argc < 2|| argc >2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change < 0)
	{
		printf("0\n");
	}
	ans = 0;
	

	for (i = 0; i < 5 && change > 0; i++)
	{
		while (change >= coins[i])
		{
			ans++;
			change -= coins[
