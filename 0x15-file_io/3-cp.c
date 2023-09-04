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
	int fp_from, fp_to, c_from, c_to, w_to, r_from;
	char buffer[1024];

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fp_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((r_from = read(fp_from, buffer, 1024)))
	{
		w_to = write(fp_to, buffer, r_from);
		if (w_to == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c_from = close(fp_from);
	if (c_from == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}
	c_to = close(fp_to);
	if (c_to == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
	return (0);
}
