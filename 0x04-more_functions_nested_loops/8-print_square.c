#include "main.h"
/**
 *
 *
 */
void print_square(int size)
{
	int count;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (count = 1; count < size; count++)
	{
		for (space = 1; space < count; space++)
		{
			_putchar(' ');
		}
	}
	_putchar('#');
	_putchar('\n');
}
