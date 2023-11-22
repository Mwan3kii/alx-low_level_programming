#include "lists.h"
/**
 * free_listpr - free linked list
 * @head: begining of node
 */
void free_listpr(listpr_t **head)
{
	listpr_t *tmp;
	listpr_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a listint_t list
 * @head: start of node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listpr_t *pr, *new, *add;

	pr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listpr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = pr;
		pr = new;
		add = pr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listpr(&pr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listpr(&pr);
	return (nodes);
}
