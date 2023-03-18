#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints possible combinations of single-digit numbers
 *
 * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 0 ; count < 10 ; count++)
	{
		putchar(count + '0');
		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
