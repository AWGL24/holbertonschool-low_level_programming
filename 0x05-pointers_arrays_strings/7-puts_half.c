#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: pointer
 */
void puts_half(char *str)
{
	int len, n, i = 0;

	for (len = 0; str[len] != '\0'; len++)
	;

	if (len % 2 == 0)
	{
		n = len  / 2;
		_putchar(n);
	}
	else
	{
		n = (len * 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
