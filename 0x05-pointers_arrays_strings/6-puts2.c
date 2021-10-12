#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character
 * @str: pointer
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
