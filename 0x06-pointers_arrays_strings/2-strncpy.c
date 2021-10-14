#include "main.h"
#include <stddef.h>
/**
 * _strncpy - function that copies a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
