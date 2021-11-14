#include "lists.h"
/**
 * add_node_end - function that adds a node at the end of a list
 * @head: head of the list
 * @str: string
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *l = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	else
	{
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = n;
	}
	return (n);
}
