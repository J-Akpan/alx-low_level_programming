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
	if (array == NULL || action == NULL)
		return;

	unsigned int m;

	for (m < 0; m < size; m++)
		action(array[m]);
}
