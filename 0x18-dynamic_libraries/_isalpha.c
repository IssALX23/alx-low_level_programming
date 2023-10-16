#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
/**
 * _isalpha - entry point
 *
 * Description: checks for alphabetic character
 * @c: input character
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c > 64 && c < 133))
		return (1);
	else
		return (0);
}
