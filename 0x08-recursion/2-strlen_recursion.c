#include  "main.h"

/**
 * Description: function to return the length of a stirngs
 *
 * @s: sting parameter to chech
 *
 * Return: 0 on succes
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return ('\n');
	else
		return (1 + _strlen_recursion(s + 1));
}
