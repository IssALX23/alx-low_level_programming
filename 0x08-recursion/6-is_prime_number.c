#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime number
 * @n: input integer
 *
 * Return: 1(prime) or 0(not prime)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_loop(n - 1, n));
}

/**
 * helper_loop - check if number is prime or not
 * @x: integer to compare n to
 * @n: input integer
 *
 * Return: 1(prime) or 0(not prime)
 */
int helper_loop(int x, int n)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (helper_loop(x - 1, n));
}
