#include "main.h"

/**
 * check_palindrome - helper function to loop
 * @i: integer
 * @j: integer
 * @s: string
 *
 * Return: 1 if true or 0 if not
 */
int check_palindrome(int i, int j, char *s)
{
	if (i <= (j + 1) / 2 && j >= (j + 1) / 2)
	{
		if (s[i] == s[j])
		{
			i++;
			j--;
			check_palindrome(i, j, s);
			return (1);
		}
	}

	return (0);	
}


/**
 * is_palindrome - function that returns 1 if a string is a palindrome 
 * @s: pointer to string
 *
 * Return: 1 if sucess and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0, i = 0, j = 0;

	while (s[len] != '\0')
		len++;
	j = len - 1;

	return (check_palindrome(i, j, s));
}

