#include "main.h"

/**
 * create_array - creates an array of chars
 *		and initializes it with a specific char
 *@size: size of array
 *@c: charachter to initialize array
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count = 0;
	if (size && c)
	{
		ptr = (char *)malloc(size * sizeof(c));

		if (ptr)
		{
			while (count < size)
			{
				ptr[count] = c;
				count++;
			}
			return (ptr);
		}
	}

	return (NULL);
}
