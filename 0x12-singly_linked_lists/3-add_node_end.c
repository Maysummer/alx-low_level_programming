#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of list_t
 * @head: pointer to pointer of head
 * @str: pointer to string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	int newLen = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[newLen])
		newLen++;

	new->str = strdup(str);
	new->len = newLen;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
