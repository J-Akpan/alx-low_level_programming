#include "main.h"

/**
 * Description: _puts_recursion - function to print strings
 * @s: String parameter
 *
 * Returen: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
