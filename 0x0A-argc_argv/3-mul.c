#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints multiply of two numbers
 * @argc: integer
 * @argv: pointer to string
 *
 * Return: 0  success
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
