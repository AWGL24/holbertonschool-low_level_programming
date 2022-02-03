#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at position
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	temp = *h;
	node->prev = NULL;
	node->next = NULL;
	node->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = node;
		else
		{
			node->next = *h;
			temp->prev = node;
			*h = node;
		}
		return (node);
	}

	while (temp->next != NULL || count + 1 == idx)
	{
		if (count + 1 == idx)
		{
			if (temp->next != NULL)
				temp->next->prev = node;
			node->next = temp->next;
			temp->next = node;
			node->prev = temp;
			return (node);
		}
		temp = temp->next;
		count++;
	}
	free_dlistint(node);
	return (NULL);
}