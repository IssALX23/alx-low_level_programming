#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments passed into program
 * @argc: integer
 * @argv: pointer to string
 *
 * Return: 0  success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; )
	{
		if (argv[i])
			i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
