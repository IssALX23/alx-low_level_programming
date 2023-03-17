#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet with putchar
 *
 * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 'a' ; count <= 'z' ; count++)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
}
