#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input
 *		integer is a prime number, otherwise return 0
 * @n: input integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_loop(n, n - 1));
}
/**
 * _prime_loop - loops to return if it's a prime
 * @n: input integer
 * @x: input integer
 *
 * Return: integer
 */
int _prime_loop(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (_prime_loop(n, x - 1));
}
