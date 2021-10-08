#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: parameter
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}

	count = 0;
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
