#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to string
 * @text_content: dta to add
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fw, count = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	while (text_content && text_content[count])
		count++;

	fw = write(fp, text_content, count);
	if (fw == -1)
		return (-1);

	close(fp);
	return (1);
}
