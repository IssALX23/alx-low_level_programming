#include "main.h"

/**
 * main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description: Write a program that prints multiplies two numbers
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (result);
}
