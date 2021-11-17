#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data (n)
 * @head: first node of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
