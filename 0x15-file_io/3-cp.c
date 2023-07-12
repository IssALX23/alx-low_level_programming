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
	char *buffer[1024];

	if (ac > 3 || ac < 3)/* if wrong number of arguments */
	{
		w_err = write(STDERR_FILENO, "Usage: cp file_from file_to", 26);
		if (w_err == -1)
			return (-1);
		exit(97);
	}
	if (*av[2])
	{
		fp1 = open(av[1], O_RDONLY);
		if (fp1 == -1)/* if file_from does not exist */
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		f1r = read(fp1, &buffer[0], 1024);
		if (f1r == -1)/* if you can not read file_from */
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		/* if file_to exist __ truncate __ permissions rw-rw-r--*/
		fp2 = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
		if (fp2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		f2w = write(fp2, &buffer[0], 1024);/* if write to file_to fails */
		if (f2w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		fc1 = close(fp1);/* if closing files is failing */
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
	}
	return (0);
}
