#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *temp, *separator = "";

	va_start(params, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(params, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(params, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(params, double));
				break;
			case 's':
				temp = va_arg(params, char*);
				if (!temp)
					temp = "(nil)";
				printf("%s%s", separator, temp);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(params);
}
