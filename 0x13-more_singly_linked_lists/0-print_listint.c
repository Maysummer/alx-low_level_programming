#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%u\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
