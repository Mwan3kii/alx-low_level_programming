#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of list
 * @head: begining of node
 *
 * Return: sum of all the data (n) of list
 * 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
