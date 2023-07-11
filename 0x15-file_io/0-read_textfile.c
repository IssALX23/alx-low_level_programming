#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t str, strw;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	/*  stores the variable that is supposed to be taken */
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fp);
		return (0);
	}

	/* store the number of bytes read from file */
	str = read(fp, &buffer[0], letters);
	if (str == -1)
	{
		close(fp);
		free(buffer);
		return (-1);
	}

	/* write the contents of buffer to the POSIX standard output */
	strw = write(STDOUT_FILENO, &buffer[0], str);
	if (strw == -1)
	{
		close(fp);
		free(buffer);
		return (-1);
	}

	close(fp);
	free(buffer);
	return (str);
}
