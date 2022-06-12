#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: list pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int total_nodes = 0;

	while (h)
	{
		total_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return total_nodes;
}
