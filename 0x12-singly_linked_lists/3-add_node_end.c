#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: string to be strored which is duplicated
 * @head: begining of node
 *
 * Return: address of new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int k, characters = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		characters++;
	new_node->len = characters;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
