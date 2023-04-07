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
	_putchar(*s);

	_puts_recursion(s + 1);
}
