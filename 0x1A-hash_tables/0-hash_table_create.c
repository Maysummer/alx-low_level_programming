#include "hash_tables.h"
/**
 * hash_table_create - function to create a  hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	hash_node_t **arr = NULL;
	unsigned long int i = 0;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return NULL;

	h_table->size = size;
	arr = malloc(sizeof(hash_node_t *) * size);
	
	if (!arr)
	{
		free(h_table);
		return NULL;
	}

	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
	h_table->array = arr;

	return(h_table);
}
