#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: parameter
 * @f: parameter
 */
void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
