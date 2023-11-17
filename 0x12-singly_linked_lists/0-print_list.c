#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of list
 * @h: begining of node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", 0);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
