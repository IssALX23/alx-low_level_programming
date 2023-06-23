#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of a and b
 * @a: integer
 * @b: integer
 *
 * Return: returns the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: integer
 * @b: integer
 *
 * Return: returns the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: integer
 * @b: integer
 *
 * Return: returns the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a by b
 * @a: integer
 * @b: integer
 *
 * Return: returns the result
 */
int op_div(int a, int b)
{
	if (!a || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod -  division of a by b
 * @a: integer
 * @b: integer
 *
 * Return: returns the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
