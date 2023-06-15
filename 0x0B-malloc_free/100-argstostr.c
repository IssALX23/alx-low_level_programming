#include "main.h"
/**
 * argstostr - function that concatenates all
 *	the arguments of your program
 *@ac: counter of arguments
 *@av: pointer to array of arguments
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int a = 0, b = 0, c = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0 ; a < ac ; a++)
	{
		for (b = 0; av[a][b] != '\0' ; b++)
			len++;
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);

	if (!ptr)
		return (NULL);

	for (a = 0 ; a < ac ; a++)
	{
		for (b = 0 ; av[a][b] != '\0' ; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}

	ptr[c] = '\0';
	return (ptr);
}
