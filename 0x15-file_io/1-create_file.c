#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: data to add
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, fw, count = 0;

	/* text_content is NULL create an empty file */
	if (!text_content)
		text_content = "";

	/* create file with these permissions rw------- */
	fp = open(filename, O_CREAT | O_WRONLY, 0600);
	/*  return -1 if failed */
	if (!fp)
		return (-1);
	/* text_content length */
	while (text_content[count])
		count++;
	/* write into file */
	fw = write(fp, text_content, count);
	if (!fw)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
