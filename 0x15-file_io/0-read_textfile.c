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
	ssize_t str;
	char buffer[1024];

	if (!filename || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	/* store the number of bytes read from file */
	str = read(fp, &buffer[0], letters);
	/* write the contents of buffer to the POSIX standard output */
	write(STDOUT_FILENO, &buffer[0], str);

	close(fp);
	return (str);
}
