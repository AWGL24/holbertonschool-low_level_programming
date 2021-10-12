#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int box;

	box = *a;
	*a = *b;
	*b = box;
}
