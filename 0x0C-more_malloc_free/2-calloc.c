#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, nb;
	char *p, *q;

	nb = nmemb * size;

	if((p = q = malloc(nb)) != NULL)
		for(i = 0; i <nb; i++)
			*p++ = 0;
	return (q);
}
