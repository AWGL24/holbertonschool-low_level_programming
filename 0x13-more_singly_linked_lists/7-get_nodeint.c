#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node of the list
 * @index: index of the list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	nth = head;

	while (count < index)
	{
		if (nth->next == NULL)
			return (NULL);
		nth = nth->next;
		count++;
	}
	return (nth);
}
