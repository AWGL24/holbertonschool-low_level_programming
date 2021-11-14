#include "lists.h"
/**
 * list_len - function that returns the len of a list
 * @h: head of the list
 * Return: lenght
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
