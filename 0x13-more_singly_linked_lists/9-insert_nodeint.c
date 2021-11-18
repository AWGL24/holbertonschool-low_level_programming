#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a node at index
 * @head: pointer to the head of the list
 * @idx: where the new node will be added
 * @n: value of data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	count = 1;
	while (count < idx)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
