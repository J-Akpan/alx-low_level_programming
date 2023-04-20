#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: get_op_func - check for operators
 *
 * @s: operator passed
 *
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i;

    while (ops[i].op != NULL && *(ops[i].op) != *s )
	    i++;
    return (ops[i].f);
}
