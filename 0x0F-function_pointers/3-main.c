#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - function to show reuslt
 *
 * @argc: parameter 1
 * @argv: parameter 2
 *
 * Return: 0 on success
 */

int main(int__attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	print("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
