#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value
 * @ht: parameter
 * @key: parameter
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp)
	{
		while (temp && strncmp(temp->key, key, strlen(key)) != 0)
		{
			temp = temp->next;
		}
		return (temp != NULL ? temp->value : NULL);
	}
	return (NULL);
}
