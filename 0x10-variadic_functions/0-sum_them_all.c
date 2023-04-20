#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * Description: sum_them_all - function to return sum
 *
 * @n: parameter to chexkx
 * @...: A variable parameter 2
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;

	va_list my_num;

	va_start(my_num, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(my_num, int);
	}

	va_end(my_num);

	return (result);
}
