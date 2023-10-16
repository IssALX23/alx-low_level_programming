#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
#include "main.h"
/**
 * _islower - entry point
 *
 * Description: checks for lowercase character
 * @c: input character
 *
 * Return: 1 if c is lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c > 98 && c < 123)
		return (1);
	else
		return (0);
}
