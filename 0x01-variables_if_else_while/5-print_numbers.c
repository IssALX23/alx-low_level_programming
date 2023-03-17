#include <stdio.h>
/**
  * main - entry point
  *
  * Description: prints all single digit numbers of base 10
  *
  * Return: always 0
*/
int main(void)
{
	int count;

	for (count = 0 ; count < 10 ; count++)
		printf("%d", count);
	printf("\n");
	return (0);
}
