#include "main.h"

/**
 * Description: _pow_recursion - fn pwr
 *
 * @x: param 1
 * @y: param 2
 *
 * Return: x pwr y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (-1);
	return (_pow_recursion(x**y));
}
