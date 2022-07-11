#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *index_list = NULL;

	if (!ht || !key)
		return (NULL);

	index  = key_index((const unsigned char *)key, ht-> size);
	index_list = ht->array[index];

	if (index_list)
	{
		return (index_list->value);
	}
	return (NULL);
}
