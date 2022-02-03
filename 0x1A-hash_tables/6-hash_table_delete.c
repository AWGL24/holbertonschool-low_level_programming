#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: parameter
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (; i <= ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
