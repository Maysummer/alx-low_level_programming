#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of list
 * @head: pointer to pointer of head
 * @n: data to be added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*new);
}
