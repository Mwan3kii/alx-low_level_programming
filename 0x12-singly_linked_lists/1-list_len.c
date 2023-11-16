#include "lists.h"
/**
 * list_len - returns no of elements in a list
 * @h: head node
 *
 * Return: no of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
