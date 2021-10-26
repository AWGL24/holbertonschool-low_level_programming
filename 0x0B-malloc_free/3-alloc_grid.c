#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2d arr
 * @width: parameter
 * @height: parameter
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int idx, idx2, count = 0;
	int **array;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == 0)
	{
		free(array);
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		array[idx] = (int *)malloc(width * sizeof(int));
		if (array[idx] == 0)
		{
			for (; idx >= 0; idx--)
			{
				free(array[idx]);
			}
			free(array);
			return (NULL);
		}
	}

	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
		{
			array[idx][idx2] = count;
		}
	}

	return (array);
}
