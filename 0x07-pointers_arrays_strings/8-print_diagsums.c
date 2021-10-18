#include "main.h"
#include <stdio.h>
/**
 * print_diagsums  - print the sum of two diagonals
 * @a: int pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int sum = 0;
	int sum1 = 0;

	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sum1 = sum1 + a[(size - 1) * j];
		j++;
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
