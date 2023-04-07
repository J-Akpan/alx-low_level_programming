#include "main.h"

/**
 * Description: factorial - program to print factorial.
 *
 * @n: param 1
 *
 * Return: -1 is error and 0 on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));	
}
