#include "main.h"

/**
 * Description: _pow_recursion - function to check for power of number
 * @x: parameter for the base
 * @y: index parameters
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
