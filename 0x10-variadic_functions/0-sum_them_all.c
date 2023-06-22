#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integer
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int res = 0;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (i = 0 ; i < n ; i++)
		res += va_arg(params, int);

	va_end(params);

	return (res);
}
