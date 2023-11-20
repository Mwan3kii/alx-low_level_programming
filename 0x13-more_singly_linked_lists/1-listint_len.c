#include "lists.h"
/**
 * listint_len - returns the no of elements in a linked list
 * @h: beginning of node
 *
 * Return: number of elments in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);
	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}
