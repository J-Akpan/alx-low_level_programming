#include <stdio.h>

/**
 * Description: main - print somthing still.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	for (c = 'a'; c <+ 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
