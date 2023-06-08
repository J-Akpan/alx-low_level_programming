#include "main.h"

/**
 * Description: test_prime - Test function
 *
 * @n: Parameter 1 to test
 * @y: Parameter 2 to test
 *
 * Return: 0
 */

int test_prime(int n, int y)
{
	if (y == 1)
		return (1);
	else if (n % y == 0 && y > 0)
		return (0);
	return (test_prime(n, y - 1));
}

/**
 * Description: is_prime_number - functioon to check for prime number
 *
 * @n: function to check
 *
 * Return: 1 if prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime(n, n - 1));
}
