#include "main.h"

/**
 * Description: print_alphabet_x10 - print f10 time.
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
