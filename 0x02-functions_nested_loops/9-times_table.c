#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int n1, n2, product = 0;

	for (n1 = 0; n1 < 10; n1++)
	{
		_putchar('0');

		for (n2 = 1; n2 < 10; n2++)
		{
			_putchar(',');
			_putchar(' ');
			product = n1 * n2;
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
