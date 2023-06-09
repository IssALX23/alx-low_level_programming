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
	printf("%s\n", argv[argc-1]);

	return (0);
}
