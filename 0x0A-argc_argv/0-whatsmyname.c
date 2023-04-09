#include <stdio.h>
#include "main.h"
/**
 * main - prints name of the program
 * @argc: integer
 * @argv: pointer to string
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
