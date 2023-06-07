#include "main.h"

/**
 * Description: _print_rev_recursion - function to print reverse string
 *
 * @s: strint parameter to print
 *
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s'\n');
	}
}
