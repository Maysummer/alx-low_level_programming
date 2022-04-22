#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (1);
		}
		else
		{
			;
		}
		len++;
		h = h->next;
	}
	return (len);
}
