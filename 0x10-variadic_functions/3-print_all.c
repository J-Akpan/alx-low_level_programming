#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * Descriptin: print_all - function to print anything
 *
 * @format: arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list(type_list);

	va_start(type_list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(type_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(type_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(type_list, double));
					break;
				case 's':
					str = va_arg(type_list, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(type_list);
}
