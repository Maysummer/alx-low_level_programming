#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: pointer
 *
 * Return: list
 */


size_t print_list(const list_t *h)
{
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
