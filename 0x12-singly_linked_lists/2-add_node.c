#include "lists.h"
/**
 * add_node - function that adds new node at beginning of list_t list
 * @str: string to be stored that needs to be duplicated
 * @head: begining of node
 *
 * Return: address of new element or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int j, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
