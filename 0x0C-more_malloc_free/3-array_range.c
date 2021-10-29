#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - function that creates and array of integers
 * @min: parameter
 * @max: parameter
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, dif;

	if (min > max)
		return (NULL);

	dif = max - min;
	arr = malloc(sizeof(int) * (dif + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
