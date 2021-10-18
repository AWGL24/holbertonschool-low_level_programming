#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) (haystack));
	}

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *needle)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			else if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (NULL);
}
