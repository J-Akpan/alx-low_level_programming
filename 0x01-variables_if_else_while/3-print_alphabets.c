#include <stdio.h>

/**
 * Description: main - progra  to print alphabets.
 *
 * Return: 0 when successfull.
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}

	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}

