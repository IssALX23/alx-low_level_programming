#include <stdio.h>
/**
 * main - entry point
 *
 * Description: display lowercase and uppercase letters
 *
 * Return: always 0
*/
int main(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
