#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *
 * main - main block
 *
 * Description: Get a random number and print the number
 *
 * and if it is positive, negative, or zero
 *
 * Return: 0
 *
 */

void positive_or_negative(int i)
{
	int n;
	srand(time(0));
	n = i;
	
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return;
}
