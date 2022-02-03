#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the beginning of a list
 * @head: beginning of the list
 * @n: value of node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		new->next = tmp;
		tmp->prev = new;
		*head = new;
		return (new);
	}
	return (new);
}
