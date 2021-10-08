#include "main.h"
/**
 * print_diagonal - function that draws a straight line
 * @n: parameter
 */
void print_diagonal(int n)
{
	int count;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (count = 0; count < n; count++)
	{
		for (space = 0; space < count; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
