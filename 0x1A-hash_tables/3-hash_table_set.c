#include "hash_tables.h"
/***/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashIndex, i;
	hash_node_t *new_node;

	if (!key)
		return (0);

	hashIndex = hash_djb2((unsigned char*)key) % ht->size;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = NULL;
	
	for(i = 0 ; i < ht->size ; i++)
	{
		if (i == hashIndex && ht->array[i] == NULL)
		{
			ht->array[i] = new_node;
			return (1);
		}
		else if (i == hashIndex && ht->array[i])
		{
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
			return (1);
		}
	}
	return (0);
}
