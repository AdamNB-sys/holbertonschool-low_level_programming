#include "hash_tables.h"

/**
 * hash_table_create - creates hash brown
 * @size: the size of the hash table
 * Return: pointer to table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashBrown;

	hashBrown = malloc(sizeof(hash_table_t));

	if (hashBrown == NULL || size == 0)
		return (NULL);
	hashBrown->size = size;
	hashBrown = malloc(sizeof(hash_node_t *) * size);

	return (hashBrown);
}
