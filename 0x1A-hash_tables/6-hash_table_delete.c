#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: parameter
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
