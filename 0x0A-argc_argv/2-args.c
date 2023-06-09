#include "main.h"
/**
 * main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description: Write a program that
 *		prints all arguments it receives
 *
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		if (argv[count])
			printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
