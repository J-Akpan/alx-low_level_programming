#include <stdio.h>

/**
 * Description: main - printing of  combinTIONS.
 *
 * Return: 0 on success
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);

			if (a == 8 && b == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
