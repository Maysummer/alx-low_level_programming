#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: poniter to list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

