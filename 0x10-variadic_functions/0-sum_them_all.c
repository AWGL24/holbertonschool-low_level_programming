#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int number;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (number < n)
	{
		sum += va_arg(list, unsigned int);
		number++;
	}
	va_end(list);
	return (sum);
}
