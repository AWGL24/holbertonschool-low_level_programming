#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: start
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, idx2, len, len2;
	char *start;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
		start = malloc(sizeof(char) * (len + len2 + 1));
	}
	else
	{
		start = malloc(sizeof(char) * (len + n + 1));
	}
	if (start == NULL)
		return (NULL);

	for (idx = 0; idx < len; idx++)
	{
		start[idx] = s1[idx];
	}
	for (idx2 = 0; idx2 < n; idx2++)
	{
		start[idx++] = s2[idx2];
	}
	start[idx++] ='\0';
	return (start);
}
