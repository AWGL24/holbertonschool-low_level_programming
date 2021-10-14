#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: 1st string
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int len = n - 1, idx;
	int tmp = 0;

	for (idx = 0; idx < len; idx++, len--)
	{
		tmp = a[idx];
		a[idx] = a[len];
		a[len] = tmp;
	}
}

