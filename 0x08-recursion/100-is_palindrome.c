#include "main.h"
int str_len(char *words);
int str_loop(char *s, int start, int end);
/**
 * is_palindrome - function that returns 1
 *		if a string is a palindrome and 0 if not
 * @s: pointer to string
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int count = str_len(s);

	if (count == 0)
		return (1);
	return (str_loop(s, 0, count));
}
/**
 * str_len - length of string
 * @words: pointer to string
 *
 * Return: integer
 */
int str_len(char *words)
{
	if (*words == '\0')
		return (0);
	else
		return (1 + str_len(words + 1));
}
/**
 * str_loop - compare each character from n to n-1
 * @s: pointer to string
 * @start: integer
 * @end: integer
 *
 * Return: integer
 */
int str_loop(char *s, int start, int end)
{
	int mid = end / 2;

	if (start > mid - 1)
		return (1);
	if (s[start] != s[end - 1 - start])
		return (0);
	return (str_loop(s, start + 1, end));
}
