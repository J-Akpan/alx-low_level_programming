#include "main.h"

/**
 * Description: _print_rev_recursion - program to print in reverse
 *
 * @s: param1
 *
 * Return: 0 always
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else if (*s)
	{
		_putchar(*s - 1);
		_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');
}
