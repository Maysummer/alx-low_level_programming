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
	hash_node_t *new_elem, *temp;
	unsigned long int index;

	if (!ht || !key || !value || strcmp(key, ""))
		return (0);

	new_elem = malloc(sizeof(hash_node_t));
	if (!new_elem)
		return (0);

	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	new_elem->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp != NULL)
		temp = temp->next;
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
