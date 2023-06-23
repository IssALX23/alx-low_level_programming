#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to const char
 * @n: integer
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *temp;

	if (!separator)
		separator = "";

	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		temp = va_arg(params, char *);
		if (!temp)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(params);
}
