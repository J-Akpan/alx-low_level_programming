#include "function_pointers.h"

/**
 * Description: array_iterator - function to give each element of array
 *
 * @size: parameter for the array size
 * @action: pointer to the function
 * @array: array holder
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m = 0;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
		action(array[m]);
}
