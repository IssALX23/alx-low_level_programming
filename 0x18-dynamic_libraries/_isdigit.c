#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
/**
 * _isdigit - writes if c is digit
 * @c: input character
 *
 * Return: On success 1. Otherwise, 0 is returned
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
