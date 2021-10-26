#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: parameter
 * Return: duplicate
 */
char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *dup_offset;

	str_size = strlen(str);
	dup = (char *)malloc(sizeof(char) * str_size + 1);
	if (dup == NULL)
		return ((char *) NULL);

	dup_offset = dup;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return (dup);
}
