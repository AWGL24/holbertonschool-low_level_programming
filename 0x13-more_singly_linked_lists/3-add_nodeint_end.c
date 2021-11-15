#include "lists.h"
/**
 * add_node_end - function that adds a node at the end of a list
 * @head: head of the list
 * @str: string
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *l = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = newnode;
	}
	return (newnode);
}

