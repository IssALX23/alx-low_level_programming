#include "main.h"

/**
 * main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description: Write a program that prints
 *		the number of arguments passed into it
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		if (argv[count])
			count++;
	}

	printf("%d\n", count - 1);
	return (0);
}
