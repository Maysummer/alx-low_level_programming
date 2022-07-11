#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size != 0)
	{
		hash = hash_djb2(key);
		return (hash % size);
	}
	return (0);
}
