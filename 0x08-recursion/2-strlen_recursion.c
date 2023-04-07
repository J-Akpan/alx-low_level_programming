#include "main.h"

/**
 * Description: _strlen_recursion - print string length
 *
 * @s: param 1
 *
 * Return: 0 always;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	
	return (_strlen_recursion(s + 1) + 1);
	
	_putchar('\n');
}
