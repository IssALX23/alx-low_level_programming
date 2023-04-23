#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: counter of arguments
 * @av: pointer to array of string
 *
 * Return: pointer to array of string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *arr = malloc(sizeof(char) * ac + 1);

	if (arr == NULL || ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
		*(arr + i) = **(av + i) + '\n';
	return (arr);
}
