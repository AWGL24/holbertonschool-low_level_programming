#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		counter += current->n;
		current = current->next;
	}
	return (counter);
}
