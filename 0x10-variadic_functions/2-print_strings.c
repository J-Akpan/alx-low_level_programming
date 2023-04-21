#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * Description: print_string - function to print strings
 *
 * @separator: string to be printed
 * @n: number of string passed
 * @...: viariadic list
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned  int i;
	char *str;

	va_list(strings_value);

	va_start(strings_value, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings_value, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings_value);
}
