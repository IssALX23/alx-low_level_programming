#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integer
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
      	int res = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		res += va_arg(args, int);
	}

	va_end(args);

	return (res);
}
