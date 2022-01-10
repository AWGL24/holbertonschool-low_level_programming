#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets the nth node
 * @head: head of the list
 * @index: parameter
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
		count++;
	}
	return (current);
}
