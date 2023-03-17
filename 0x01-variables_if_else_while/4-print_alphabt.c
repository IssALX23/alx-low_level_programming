#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all letters exept q and e
 *
 * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 'a' ; count <= 'z' ; count++)
	{
		if (count != 'q' && count != 'e')
			putchar(count);
	}
	putchar('\n');
	return (0);
}
