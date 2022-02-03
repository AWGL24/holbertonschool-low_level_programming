#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table = NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	table->size = size;

	if (table->array == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
