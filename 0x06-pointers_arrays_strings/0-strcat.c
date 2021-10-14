#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;
	while (dest[lenght] != '\0')
	{
		++lenght;
	}

	for (i = 0; src[i] != '\0'; ++i, ++lenght)
	{
		dest[lenght] = src[i];
	}

	dest[lenght] = '\0';

	return (dest);
}
