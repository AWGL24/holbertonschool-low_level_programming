#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: parameter
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
