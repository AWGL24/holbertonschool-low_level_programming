#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: parameter
 * @c: parameter
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		str[idx] = c;

	return (str);
}
