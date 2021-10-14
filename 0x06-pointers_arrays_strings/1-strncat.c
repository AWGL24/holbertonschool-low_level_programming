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
	char *s1 = dest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	while (*s1 != '\0')
	{
		s1++;
	}

	while (n--)
	{
		if (!(*s1++ = *src++))
		{
			return (dest);
		}
	}

	*s1 = '\0';

	return (dest);
}
