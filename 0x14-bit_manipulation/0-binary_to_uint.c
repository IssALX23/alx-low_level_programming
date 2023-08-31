#include <stdio.h>
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen_recursion(const char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * _pow_recursion - function that returns the value of
 *		x raised to the power of y
 *@x : input integer
 *@y : input integer
 *
 * Return:an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));

	return (0);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int new_b = 0, len = 0, power = 0;

	if (!b)
		return (0);
	len = _strlen_recursion(b);
	for (i = len - 1 ; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			new_b += _pow_recursion(2, power);
		power++;
	}
	return (new_b);
}
