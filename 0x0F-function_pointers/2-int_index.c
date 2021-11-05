#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array itself
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare variable
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);

	return (-1);
}
