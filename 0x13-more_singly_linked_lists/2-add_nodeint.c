#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of list
 * @head: start of node
 * @n: new int to be created
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (0);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (0);
}
