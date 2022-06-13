#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to list
 * @index: index of node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
