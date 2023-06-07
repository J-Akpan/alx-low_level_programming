#include "main.h"

/**
 * Description: factorial - function to return the factorial of a given number
 * @n: parameter for check
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
