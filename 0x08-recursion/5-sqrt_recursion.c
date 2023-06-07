#include "main.h"

/**
 * _sqrt_recursion - calls function to compare and return square root
 * @n: input integer
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (helper_loop(1, n));
}

/**
 * helper_loop - returns the natural square root of a number
 * @x: input integer to compare n to it
 * @n: input number
 *
 * Return: an integer
 */

int helper_loop(int x, int n)
{
	if (n <= 0 || x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (helper_loop(x + 1, n));
}
