#include "function_pointers.h"

/*
 * Description: int_index - function that search for integers
 *
 * @array: array function
 * @size: no. of array element
 * @cmp: pointr to the function
 *
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	for (m = 0; m < size; m++)
		if (cmp(array[m]))
			return (m);
	return (-1);
}
