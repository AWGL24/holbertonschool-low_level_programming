#include "hash_tables.h"
/**
 * hash_tables_create - function that creates a hash table
 * @size: size of the array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    table = malloc(sizeof(hash_node_t));
    if (table == NULL)
        return (NULL);
    table->size = size;
    table->array = malloc(sizeof(hash_node_t *) * size);
    if (table->array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        table->array[i] = NULL;
    }
    return (table);
}
