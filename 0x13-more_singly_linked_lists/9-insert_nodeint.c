#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: begining of node
 * @idx: index of the list where new node is added index starts 0
 * @n: the new node data
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp;
	listint_t *old_temp;
	listint_t *newnode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newnode = create_newnode(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
		*head = newnode;
	for (k = 0; k < idx - 1 && temp != NULL && idx != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = temp;
	else
	{
		old_temp = temp->next;
		temp->next = newnode;
		newnode->next = old_temp;
	}
	return (newnode);
}
/**
 * create_newnode - creates new node
 * @n: data of node
 *
 * Return: pointer to node
 */
listint_t *create_newnode(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}
