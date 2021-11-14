#include "lists.h"
/**
 * print_list - function that prints a list_t list
 * @h: list to be printed
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		count++;
	}
	return (count);
}
