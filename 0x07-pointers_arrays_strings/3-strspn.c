#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
