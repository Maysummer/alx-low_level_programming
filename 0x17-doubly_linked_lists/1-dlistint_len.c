#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h:list
 * Return: total number of elemets
 */

size_t dlistint_len(const dlistint_t *h)
{
	int total_elem = 0;

	while (h)
	{
		total_elem++;
		h = h->next;
	}
	return (total_elem);
}
