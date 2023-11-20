#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: begining of node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
