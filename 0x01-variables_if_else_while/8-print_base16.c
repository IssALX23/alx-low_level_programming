#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 48 ; count < 58 ; count++)
		putchar(count);
	for (count = 97 ; count < 103 ; count++)
		putchar(count);
	putchar('\n');
	return (0);
}
