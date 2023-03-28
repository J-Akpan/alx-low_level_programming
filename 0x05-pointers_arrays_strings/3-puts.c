#include "main.h"

/**
 * Description: _puts - program to print string
 *
 * @str: put parameter
 *
 * Return: success
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
