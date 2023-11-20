#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: begining of node
 * @index: index of node starting at 0
 *
 * Return: nth node of a linked list
 * NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
