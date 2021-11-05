#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: parameter
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, unsigned int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
