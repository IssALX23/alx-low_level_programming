#include "main.h"
/**
 * get_length - function to count characters
 * @s: string
 *
 * Return: count
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_length(s + 1));
}
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
	if (i >= j)
		return (1);

	if (s[i] == s[j])
		return (check_palindrome(i + 1, j - 1, s));

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
	int len = get_length(s), i = 0, j = 0;

	j = len - 1;
	return (check_palindrome(i, j, s));
}
