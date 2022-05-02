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
	size_t middle;
	size_t a, b;

	if (array == NULL)
		return (0);

	for (a = 0, b = size; a < b;)
	{
		middle = a + (b - a) / 2;
		if (value <= array[middle])
		{
			b = middle;
		}
		else
		{
			a = middle + 1;
		}
	}

	if (a < size && value == array[a])
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
