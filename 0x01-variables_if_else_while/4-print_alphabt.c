#include <stdio.h>

/**
 * Description: main - Program to print alphabet still.
 *
 * Return: 0 if success.
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' || letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
