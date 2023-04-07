#include "main.h"

/**
 * Description: _puts_recursion - print strings
 *
 * @s: param 1
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');


}
