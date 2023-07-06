#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if integer is digit or not
 * @c: inout integer
 *
 * Return: 1 when true, 0 when false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/**
 * _atoi - convert string to intger
 * @s: pointer to string
 *
 * Return: integer
 */
int _atoi(const char *s)
{
	int i, count = 0, flag_digit, digit = 0,
	    count_minus = 0, number = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0 ; i < count ; i++)
	{
		if (s[i] == '-')
			count_minus++;
		if (_isdigit(s[i]))
		{
			digit = s[i] - 48;
			if (count_minus % 2)
				digit *= -1;
			number = number * 10 + digit;
			flag_digit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (flag_digit == 0)
		return (0);
	return (number);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0, reminder = 0,
		     decimal = 0, weight = 1, binary = 0;

	if (!b)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	binary = _atoi(b);
	for (i = 0 ; i < count ; i++)
	{
		reminder = binary % 10;
		decimal = decimal + reminder * weight;
		binary = binary / 10;
		weight = weight * 2;
	}
	return (decimal);
}
