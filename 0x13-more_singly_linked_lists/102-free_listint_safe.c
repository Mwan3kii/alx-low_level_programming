#include "lists.h"
/**
 * free_listpr2 - frees a linked list
 * @head: start of node
 */
void free_listpr2(listpr_t **head)
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
 * free_listint_safe - frees a linked list
 * @h: head of list
 *
 * Return:  size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listpr_t *pr, *new, *add;
	listint_t *cur;

	pr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listpr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = pr;
		pr = new;
		add = pr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listpr2(&pr);
				return (nodes);
			}
		}
		cur = *h;
		*h = (*h)->next;
		free(cur);
		nodes++;
	}
	*h = NULL;
	free_listpr2(&pr);
	return (nodes);
}
