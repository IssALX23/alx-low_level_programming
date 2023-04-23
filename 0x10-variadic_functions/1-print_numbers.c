#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to const char
 * @n: unsigned integer
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator && i < n - 1)
			printf("%d%s", va_arg(my_list, int), separator);
		else
			printf("%d", va_arg(my_list, int));
	}
	printf("\n");

	va_end(my_list);
}
