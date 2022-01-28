#include "hash_tables.h"
/**
 * hash_table_print - function that prints hash table
 *
 * @ht: parameter
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int head = 1, i = 0;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (!head)
					printf(", ");
				else
					head = 0;
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			}
		}
	}
	else
		return;
	printf("}\n");
}
