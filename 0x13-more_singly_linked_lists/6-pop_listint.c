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
	listint_t *temp = *head;

	if (head == NULL)
		return (0);

	*head = (*head)->next;
	temp->next = NULL;
	free(temp);
	return (temp->n);
}
