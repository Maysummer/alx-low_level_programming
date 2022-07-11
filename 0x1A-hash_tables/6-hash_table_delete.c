#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *index_list = NULL, *temp = NULL;

	if (!ht)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		index_list = ht->array[i];
		while (index_list)
		{
			temp = index_list->next;
			free(index_list->key);
			free(index_list->value);
			free(index_list);
			index_list = temp;
		}
	}
	free(ht->array);
	free(ht);
}
