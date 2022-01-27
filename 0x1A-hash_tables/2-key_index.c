#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 *
 * @param key
 * @param size
 * @return unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return ((hash_djb2(key)) % size);
}