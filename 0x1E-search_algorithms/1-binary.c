#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the binary search algorithm
 *
 * @array: parameter
 * @size: paramter
 * @value: parameter
 * Return: integer
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t idx1, idx2;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (idx2 = l; idx2 <= r; idx2++)
		{
			if (idx2 == r)
				printf("%d", array[idx2]);
			else
				printf("%d, ", array[idx2]);
		}
		printf("\n");
		idx1 = (l + r) / 2;
		if (array[idx1] < value)
			l = idx1 + 1;
		else if (array[idx1] > value)
			r = idx1 - 1;
		else
			return (value);
	}
	return (-1);
}
