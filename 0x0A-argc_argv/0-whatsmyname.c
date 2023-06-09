#include "main.h"
/**
 * main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description : Write a program that prints its name
 *		followed by a new line.
 * Return : 0 when success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
