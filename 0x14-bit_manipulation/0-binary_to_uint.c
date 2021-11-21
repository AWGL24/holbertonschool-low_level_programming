#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an uint
 * @b: pointer
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			uint <<= 1;
			uint += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (uint);
}
