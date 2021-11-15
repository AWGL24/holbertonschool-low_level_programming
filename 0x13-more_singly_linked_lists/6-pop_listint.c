#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * and returns the head node's data (n)
 * @head: head node of the list
 * Return: head node's (n) data
 */
int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	int result;

	if (*head == NULL)
		return (0);

	h = *head;
	*head = (*head)->next;
	result = h->n;
	free(h);

	return (result);
}
