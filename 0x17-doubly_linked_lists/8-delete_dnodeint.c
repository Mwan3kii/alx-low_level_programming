#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: start of node
 * @index: idx of list
 *
 * Return: 1 if it succeeded
 * -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (curr->next != NULL)
			curr->next->prev = NULL;
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (index > 0 && curr != NULL)
	{
		curr = curr->next;
		index--;
	}
	if (curr == NULL)
		return (-1);
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
