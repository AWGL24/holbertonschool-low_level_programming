#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - function that allocates memory
 * @nmemb: parameter
 * @size: parameter
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < nmemb * size)
		p[i++] = 0;

	return (p);
}
