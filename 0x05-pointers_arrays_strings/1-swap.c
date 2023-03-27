#include "main.h"

/**
 * Description: swap_int - swap parmeter
 *
 * @a: first parameter to swap
 * @b: second parameter to swap
 *
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
