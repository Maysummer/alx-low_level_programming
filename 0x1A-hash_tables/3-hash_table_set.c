#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem, *index_list;
	unsigned long int index;

	new_elem = malloc(sizeof(hash_node_t));
        if (!new_elem)
                return (0);

	if (!ht || !key || !value || strcmp(key, ""))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
        index_list = ht->array[index];

	while (index_list)
	{
		if (strcmp(index_list->key, key) == 0)
		{
			index_list->value = strdup(value)
		}
		index_list = index_list->next;
	}

	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
