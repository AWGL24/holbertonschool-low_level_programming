#include "main.h"

/**
 * more_numbers - function that prints numbers from 0-14
 */

void more_numbers(void)
{
	int l;
	int num;

	for (l = 0; l <= 9; l++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
