#include "hash_tables.h"

/**
 * printHashTable - print the hash table 
 * @ht: hash table
 *
 * Return: void
 */
void printHashTable(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *current;

	for (i = 0; i < ht->size; ++i)
	{
		printf("Index %lu: ", i);
		current = ht->array[i];
		while (current != NULL)
		{
			printf("(%s : %s) -> ", current->key, current->value);
			current = current->next;
		}
		printf("NULL\n");
	}
	printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("hash table created\n");

    hash_table_set(ht, "betty", "cool");
printf("hash table added one element\n");

hash_table_set(ht, "la", "mentioner");
hash_table_set(ht, "la", "hetairas");

hash_table_set(ht, "lala", "neurospora");
hash_table_set(ht, "lala", "heliotropes");

hash_table_set(ht, "li", "serafins");
hash_table_set(ht, "li", "depravement");

hash_table_set(ht, "lili", "subgenera");
hash_table_set(ht, "lili", "stylist");

hash_table_set(ht, "lo", "synaphea");
hash_table_set(ht, "lo", "joyful");

hash_table_set(ht, "lolo", "urites");
hash_table_set(ht, "lolo", "redescribed");

hash_table_set(ht, "lalilo", "vivency");
hash_table_set(ht, "lalilo", "dram");

printf("hash table afteeeeeeer \n");
printHashTable(ht);

    return (EXIT_SUCCESS);
}
