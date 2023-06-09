#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: list of arguments
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);

	return (0);
}
