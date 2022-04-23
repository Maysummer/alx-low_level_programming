#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list list_t
 * @head: pointer to head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
