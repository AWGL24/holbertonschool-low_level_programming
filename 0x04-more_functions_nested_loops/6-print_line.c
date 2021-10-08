#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: parameter
 */
void print_line(int n)
{
	int count = 0;
	char line = '_';

	while (count < n)
	{
		_putchar(line);
		count++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
