#include "lists.h"

/**
 *free_list - function that frees a list_t list
 *@head: list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

