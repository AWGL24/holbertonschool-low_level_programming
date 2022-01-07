#include "lists.h"
/**
 * dlistint_len - function that prints the lenght of a dlistint list
 * @h: head of the list
 * Return: lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
