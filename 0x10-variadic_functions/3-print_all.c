#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: pointer to const char
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list my_list;
	char *ptr_str, *separator = "";

	va_start(my_list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(my_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(my_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(my_list, double));
				break;
			case 's':
				ptr_str = va_arg(my_list, char*);
				if (!ptr_str)
					ptr_str = "(nil)";
				printf("%s%s", separator, ptr_str);
				break;
			default:
				i++;
				continue;

		}
		separator = ", ";
		i++;
	}
	printf("\n");

	va_end(my_list);
}
