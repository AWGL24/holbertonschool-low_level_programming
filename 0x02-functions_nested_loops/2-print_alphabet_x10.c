#include "main.h"
/**
 * main - function
 * Return: 0
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
