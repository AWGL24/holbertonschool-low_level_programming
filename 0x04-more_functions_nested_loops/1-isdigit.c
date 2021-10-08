#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: parameter
 * Return: 1 if x is a digit or 0 otherwhise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
