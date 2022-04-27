#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: pointer to pointer of head
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
