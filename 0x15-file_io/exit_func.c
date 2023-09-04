#include "main.h"
/**
 * exit_usage - prints error message when number of
 * argument is not the correct one
 *
 * Return: void
 */
void exit_usage(void)
{
	fprintf(stderr, "Usage: cp file_from file_to\n");
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
	fprintf(stderr, "Error: Can't read from file %s\n", str);
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
	fprintf(stderr, "Error: Can't write to %s\n", str);
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
