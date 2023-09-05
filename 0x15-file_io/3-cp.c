#include "main.h"
/**
 * exit_usage - prints error message when wrong args number
 *
 * Return: void
 */
void exit_usage(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * exit_read - prints error message when opening failed
 * @str: pointer to string
 *
 * Return: void
 */
void exit_read(char *str)
{
	dprintf(2, "Error: Can't read from file %s\n98\n", str);
	exit(98);
}
/**
 * exit_write - prints error message when writing in failed
 * @str: pointer to string
 *
 * Return: void
 */
void exit_write(char *str)
{
	dprintf(2, "Error: Can't write to %s\n", str);
	exit(99);
}
/**
 * exit_close - prints error message when closing failed
 * @fp: file pointer
 *
 * Return: void
 */
void exit_close(int fp)
{
	fprintf(stderr, "Error: Can't close fd %d\n", fp);
	exit(100);
}
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
	mode_t perms = S_IWUSR | S_IRUSR | S_IROTH | S_IRGRP | S_IWGRP;

	if (ac != 3)
		exit_usage();

	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fp_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fp_to == -1)
		exit_write(av[2]);

	while ((r_from = read(fp_from, buffer, sizeof(buffer))))
	{
		if (r_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w_to = write(fp_to, buffer, r_from);
		if (w_to == -1)
		{
			c_from = close(fp_from);
			if (c_from == -1)
				exit_close(fp_from);
			c_to = close(fp_to);
			if (c_to == -1)
				exit_close(fp_to);
			exit_write(av[2]);
		}
	}

	c_from = close(fp_from);
	if (c_from == -1)
		exit_close(fp_from);
	c_to = close(fp_to);
	if (c_to == -1)
		exit_close(fp_to);
	return (0);
}
