#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @*s: pointer
 * @b: parameter
 * @n: parameter
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
