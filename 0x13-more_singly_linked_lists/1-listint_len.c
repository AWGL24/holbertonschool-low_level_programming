#include "lists.h"
/**
 * listint_len - function that returns the len of a list
 * @h: head of the list
 * Return: lenght
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

