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
	size_t n = strlen(needle);

	while (haystack)
	{
		if (!memcmp(haystack++, needle, n))
		{
			return ((char *) (haystack - 1));
		}
	}
	return (0);
}
