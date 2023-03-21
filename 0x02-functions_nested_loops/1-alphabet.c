#include "main.h"

/**
 * Description: main - Write a function that prints the alphabet, in lowercase.
 *
 * Return: 0 on su cess.
 */

void print_alphabet(void)
{
	char go;
	for (go = 'a'; go <= 'z'; go++ )
		_putchar(go);

	_putchar('\n');
}
