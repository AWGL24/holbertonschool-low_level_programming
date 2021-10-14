#include "main.h"
#include <stddef.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx, idx2;

	for (idx = 0; dest[idx] != '\0'; idx++)
	;

	for (idx2 = 0; src[idx2] != '\0' && idx2 < n; idx2++)
	{
		dest[idx] = src[idx2];
		idx++;
	}

	if (idx2 < n)
	{
		src[idx2] = '\0';
	}

	return (dest);
}
