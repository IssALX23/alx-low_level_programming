#include "main.h"
/**
 * print_error - prints error message
 * @file_from: fp1
 * @file_to: fp2
 * @av: argument array
 *
 * Return: void
 */
void print_error(int file_from, int file_to, char *av[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(98);
	}
}
/**
 * main - copies the content of a file to another file
 * @ac: counter of arguments
 * @av: array of arguments
 * Return: 0 when success
 */
int main(int ac, char *av[])
{
	int w_err, fp1, fp2, f1r, f2w, fc1, fc2;
	char buffer[1025];

	if (ac != 3)/* if wrong number of arguments */
	{
		w_err = write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		if (w_err == -1)
			return (-1);
		exit(97);
	}
	fp1 = open(av[1], O_RDONLY);
	fp2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	print_error(fp1, fp2, av);/* if file_from does not exist */
	while ((f1r = read(fp1, buffer, sizeof(buffer))) > 0)
	{
		f2w = write(fp2, buffer, f1r);
		if (f2w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (f1r  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fc1 = close(fp1);
	if (fc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp1);
		exit(100);
	}
	fc2 = close(fp2);
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp2);
		exit(100);
	}
	return (0);
}
