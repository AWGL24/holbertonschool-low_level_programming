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
	hash_node_t *node = NULL;
	hash_node_t *temp;
	unsigned long int index = 0;

	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);
	if (ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
			temp = temp->next;
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
	}
	return (1);
}
