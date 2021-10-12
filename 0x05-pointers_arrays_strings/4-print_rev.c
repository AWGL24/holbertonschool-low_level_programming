#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	;

	for (l -= 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
