#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - finds number of elements in a linked
 * @h: head of a node
 *
 * Return: number of elements linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elems = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elems++;
	}
	return num_elems;
}
