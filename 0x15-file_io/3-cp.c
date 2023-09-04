#include "main.h"
/**
 * main - check the code
 * @ac: counter of args
 * @av: array of args
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int fp_from, fp_to, c_from, c_to, w_to;
	char *buffer[1024];

	if (ac != 3)
	{
		fprintf(stderr, "%s", "Usage: cp file_from file_to");
		exit(97);
	}
	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
	{
		fprintf(stderr, "%s %d\n", "Error: Can't read from file ", *av[1]);
		exit(98);
	}
	fp_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		fprintf(stderr, "%s %d\n", "Error: Can't write to ", *av[2]);
		exit(99);
	}
	while (read(fp_from, buffer, 1024))
	{
		w_to = write(fp_to, buffer, 1024);
		if (w_to == -1)
		{
			fprintf(stderr, "%s %d\n", "Error: Can't write to ", *av[2]);
			exit(99);
		}
	}
	c_from = close(fp_from);
	if (c_from == -1)
	{
		fprintf(stderr, "%s %d\n", "Error: Can't close fd ", fp_from);
		exit(100);
	}
	c_to = close(fp_to);
	if (c_to == -1)
	{
		fprintf(stderr, "%s %d\n", "Error: Can't close fd ", fp_to);
		exit(100);
	}
	return (0);
}
