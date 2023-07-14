#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: counter of arguments
 * @av: array of arguments
 * Return: 0 when success
 */
int main(int ac, char *av[])
{
	int w_err, fp1, fp2, f1r, f2w, fc1, fc2;
	char buffer[1024];

	if (ac != 3)/* if wrong number of arguments */
	{
		w_err = write(STDERR_FILENO, "Usage: cp file_from file_to", 27);
		if (w_err == -1)
			return (-1);
		exit(97);
	}
	fp1 = open(av[1], O_RDONLY);
	if (fp1 == -1)/* if file_from does not exist */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fp2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((f1r = read(fp1, buffer, 1024)) > 0)
	{
		f2w = write(fp2, buffer, 1024);
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
		exit(99);
	}
	fc2 = close(fp2);
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp2);
		exit(99);
	}

	return (0);
}
