#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of a list
 * @str: string
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int newLen = 0;

	while (str[newLen])
		newLen++;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str =  strdup(str);
	temp->len = newLen;
	temp->next = *head;
	*head = temp;

	return (*head);
}
