#include <stdio.h>

/**
 * Description: main - progran to print alphabet.
 *
 * Return: always 0 on success.
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
