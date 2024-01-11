#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: begining of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
