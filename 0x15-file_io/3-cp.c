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
		exit_usage();

	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
		exit_read(av[1]);

	fp_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
		exit_write(av[2]);

	while ((r_from = read(fp_from, buffer, 1024)) != 0)
	{
		if (r_from == -1)
			exit_read(av[1]);
		w_to = write(fp_to, buffer, r_from);
		if (w_to == -1)
			exit_write(av[2]);
	}

	c_from = close(fp_from);
	if (c_from == -1)
		exit_close(fp_from);

	c_to = close(fp_to);
	if (c_to == -1)
		exit_close(fp_to);

	return (0);
}
