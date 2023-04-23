#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer to const char
 * @n: input integer
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_list;
	char *arg_str;

	va_start(my_list, n);

	for (i = 0 ; i < n ; i++)
	{
		arg_str = va_arg(my_list, char *);
		if (arg_str == NULL)
			printf("(nil)");
		else
			printf("%s", arg_str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(my_list);
}
