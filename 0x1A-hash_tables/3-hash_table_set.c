#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h;
	hash_node_t *node = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	h = key_index((const unsigned char *)key, ht->size);
	if (ht->array[h] == NULL)
	{
		ht->array[h] = node;
		return (1);
	}
	else
	{
		tmp = ht->array[h];
		while (tmp != NULL)
		{
			tmp = tmp->next;
		}
		tmp = ht->array[h];
		node->next = tmp;
		ht->array[h] = node;
		return (1);
	}
}
