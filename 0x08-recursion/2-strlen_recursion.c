#include  "main.h"

/**
 * Description: _strlen_recursion - function to return the length of a stirngs
 *
 * @s: sting parameter to chech
 *
 * Return: 0 on succes
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
