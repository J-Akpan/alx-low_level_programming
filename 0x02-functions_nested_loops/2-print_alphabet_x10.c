#include "main.h"

/**
 * Description: void print_alphabet_x10(void) - 
 * print f10 time the alphabet.
 *
 * Return: asuccessfule
 */

void print_alphabet_x10(void)
{
	int check = 0;
	char we;

	while(check++ <= 9)
	{
		for (we = 'a'; we <= 'z'; we++)
		{
			_putchar(we);
		}

		_putchar('\n');
	}
}
