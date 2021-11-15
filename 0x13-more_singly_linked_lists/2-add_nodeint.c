#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: head of the list
 * @str: string
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

