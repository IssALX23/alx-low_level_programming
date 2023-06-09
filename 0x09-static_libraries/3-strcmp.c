#include "main.h"
/**
 * _strcmp - entry point
 *
 * Description: function that compares two strings
 * @s1:  input pointer to s1
 * @s2:  input pointer to s2
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, flag = 0;

	while (s1[i] != '0')
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (flag);
}
