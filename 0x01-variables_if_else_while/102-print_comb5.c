#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: always 0
*/
int main(void)
{
	int a, b;

	for (a = 0 ; a < 100 ; a++)
	{
		putchar('0');
		putchar(a + '0');
		putchar(' ');
		for (b = 0 ; b < 100 ; b++)
		{
			putchar('0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
