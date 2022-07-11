#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *index_list = NULL;
	int place_comma = 0;

	if (!ht)
		return;

	size = ht->size;

	printf("{");
	for (i = 0; i < size; i++)
	{
		index_list = ht->array[i];
		while (index_list)
		{
			if (place_comma)
				printf(", ");
			printf("'%s': '%s'", index_list->key, index_list->value);
			index_list = index_list->next;
			place_comma = 1;
		}
	}
	printf("}\n");
}
