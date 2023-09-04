#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to string
 * @text_content: pointer to string
 *
 * Return: 1 when succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0, count = 0;
	ssize_t bytesW = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	while (text_content[count])
		count++;

	bytesW = write(fp, text_content, count);
	if (bytesW == -1)
		return (-1);

	return (1);
}
