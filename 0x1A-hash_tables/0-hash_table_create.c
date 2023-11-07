#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (size <= 0)
		return (NULL);
	new_hash = malloc(sizeof(hash_node_t) * size);
	if (new_hash == NULL)
		return (NULL);

	return (new_hash);
}
