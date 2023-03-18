#include <stdio.h>

/**
 * main - program to print combinatiokn from 0 to 99
 * Return: 0 on success
*/

int main(void)
{
	int val1, val2;

	for (val1 = 0; val1 <= 98; val1++)
	{
		for (val2 = val1 + 1; val2 <= 99; val2++)
		{
			putchar(val1 / 10 + '0');
			putchar(val1 % 10 + '0');
			putchar(' ');
			putchar(val2 / 10 + '0');
			putchar(val2 % 10 + '0');

			if (val1 == 98 && val2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
