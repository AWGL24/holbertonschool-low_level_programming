#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: variable
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}

	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
