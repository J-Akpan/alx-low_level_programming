#include <stdio.h>

/**
 * Description: main - program to print string.
 *
 * Return: always returns 0 if successful.
 */

int main(void)
{
	char character;
	int integer;
	long lg;
	double dou;
	float floating;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n,", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lg));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dou));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floating));

	return (0);
}
