#include "lists.h"
/**
 * print_listint - function that prints a list_t list
 * @h: list to be printed
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}

