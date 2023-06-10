#include "main.h"
/**main - entry point
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Description: Write a program that adds positive numbers
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int counter = 0, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	while (counter < argc)
	{
		if (*argv[counter] < '0' || *argv[counter] > '9')
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[counter]);
		counter++;
	}

	printf("%d\n", result);

	return (0);
}
