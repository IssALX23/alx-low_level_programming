#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: pointer to a string
 * @n: integer
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	if (!separator)
		separator = "";
	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(params, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
