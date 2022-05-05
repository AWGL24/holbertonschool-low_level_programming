#include "search_algos.h"
#include <math.h>
size_t lowest(int a, int b);
/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: integer
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = sqrt(size);

	if (!array || size <= 0)
		return (-1);

	printf("Value checked array[%lu] = [%i]\n", start, array[start]);
	while (end < size && array[start] < value)
	{
		if (array[end] >= value)
			break;
		start += end;
		end += sqrt(size);
		printf("Value checked array[%lu] = [%i]\n", start, array[start]);
	}

	if (start >= size || array[start] > value)
		return (-1);
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (; array[start] <= value && start <= lowest(size - 1, end); start++)
	{
		printf("value checked array[%lu] = [%i]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
/**
 * lowest - returns the lowest between a and b
 * @a: integer
 * @b: integer
 *
 * Return: the lowest between a and b
 */
size_t lowest(int a, int b)
{
	return (a < b ? a : b);
}
