#include "function_pointers.h"
/**
 * Description: print_name - function that prints name
 *
 * @name: name parameter
 * @f: function pointer
 *
 * Return: nnothning
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
