#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0
*/
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float evenSum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			evenSum += sum;
		a = b;
		b = sum;
	}
	printf("%.0f\n", evenSum);
	return (0);
}
