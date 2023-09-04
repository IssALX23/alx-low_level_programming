#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to string
 * @letters: input integer
 *
 * Return: NULL or number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0;
	char *buffer = NULL;
	ssize_t bytesR = 0, bytesW = 0;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		perror("error opening file\n");
		return (0);
	}
	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
	{
		close(fp);
		return (0);
	}
	bytesR = read(fp, buffer, letters);
	if (bytesR == -1)
	{
		perror("error reading from file\n");
		close(fp);
		free(buffer);
		return (0);
	}
	bytesW = write(STDOUT_FILENO, buffer, bytesR);
	if (bytesW == -1)
	{
		perror("error writting into file\n");
		close(fp);
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (bytesR);
}
