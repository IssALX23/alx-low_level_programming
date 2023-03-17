#include <stdio.h>
/**
 * main - entry point
 *
 * Description: use putchar to oitpit number
 *
 * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 0 ; count < 10 ; count++)
		putchar('0' + count);
	putchar('\n');
	return (0);
}
