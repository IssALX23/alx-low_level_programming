#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_root_loop(n, 1));
}
/**
 * _sqrt_root_loop - finds square root integer
 * @n: input integer
 * @guess: interger to compare n to
 *
 * Return: integer
 */
int _sqrt_root_loop(int n, int guess)
{
	if (n == 0 || guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (_sqrt_root_loop(n, guess + 1));
}
