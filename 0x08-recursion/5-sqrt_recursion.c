#include "main.h"

/**
 * Description: test_case - test cases
 * @n: parameter 1
 * @x: parameter 2
 *
 * Return: 0
 */

int test_case(int n, int x)
{
	if (n * n == x)
		return (n);
	else if (n * n > x)
		return (-1);
	return (test_case(n + 1, x));
}

/**
 * Description: _sqrt_recursion -function to check the sqrt
 *
 * @n: parameter 1
 *
 * Return: the sqrt
 */

int _sqrt_recursion(int n)
{
	return (test_case(1, n));
}
