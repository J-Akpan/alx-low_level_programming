#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * Description: print_numbers - function to print numbers
 *
 * @separator: parameter 1
 * @n: parameter 2
 * @...: parameter 3
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);

}
