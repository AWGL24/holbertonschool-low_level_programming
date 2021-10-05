#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int x;
	char alph;

	for (x = 0; x < 10; x++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
