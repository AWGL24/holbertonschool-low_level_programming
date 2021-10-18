#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a char string
 * @s: pointer
 * @c: parameter
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
