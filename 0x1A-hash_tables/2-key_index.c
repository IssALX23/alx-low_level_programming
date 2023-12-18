#include "hash_tables.h"
/***/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex;

	if (!size)
		return (0);

	/* using the division method by using size */
	hashIndex = hash_djb2(key) % size;

	return (hashIndex);
}
