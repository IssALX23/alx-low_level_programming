#include "main.h"
/**
 * is_number - check if number is digit or not
 * @str: string
 *
 * Return: 1 if number and 0 if not
 */
int is_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description: Write a program that adds positive numbers
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int counter = 1, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argv[counter])
	{
		if (is_number(argv[counter]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[counter]);
		counter++;
	}

	printf("%d\n", result);
	return (0);
}
