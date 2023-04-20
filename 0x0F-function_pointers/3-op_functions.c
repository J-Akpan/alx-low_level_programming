#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: op_add - adding function
 *
 * @a: first integer to add
 * @b: second int to add
 *
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * Description: op_sub - subtracting function
 *
 * @a: first integer to subtract
 * @b: second int to subtract
 *
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * Description: op_mul - adding function
 *
 * @a: first integer to multiply
 * @b: second int to multiply
 *
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * Description: op_div - dividing function
 *
 * @a: first integer to divide
 * @b: second int to divide
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * Description: op_mod - remainder function
 *
 * @a: first integer to divide
 * @b: second int to divide
 *
 * Return: a%b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
