#include "main.h"
/**
 * _atoi -  function that convert a string to an integer
 * @s : pinter to sting
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, count = 0, flag_digit, digit = 0, count_minus = 0, number = 0;

	while (s[count] != '\0')	/* loop to get length */
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)	/* loop through the string + flag is down */
	{
		if (s[i] == '-')	/*count minus sign */
		{
			count_minus++;
		}
		if (isdigit(s[i]))	/* check if s[i] is digit */
		{
			digit = s[i] - 48;	/* turn s[i] t0 integer */
			if (count_minus % 2)
			{
				digit *= -1;	/*  check if number is negative */
			}
			number = number * 10 + digit;	/* add digits to get a number */
			flag_digit = 1;	/* flag is up */
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;	/* break if next character in not digit */
			}
		}
	}
	if (flag_digit == 0)
		return (0);
	else
		return (number);
}
