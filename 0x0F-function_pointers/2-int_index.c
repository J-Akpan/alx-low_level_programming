#include "function_pointers.h"

/**
 * Description: int_index - function to serach integers
 * @array: array function
 * @size: no. of array element
 * @cmp: pointr to the function
 *
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
		if (cmp(array[m]))
			return (m);
	return (-1);
}
