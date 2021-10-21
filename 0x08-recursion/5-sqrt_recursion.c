#include "main.h"
/**
 * square_checker - function that checks if the number
 * matches the total when multiplied by itself
 * @num: parameter
 * @n: parameter
 * Return: match
 */
int square_checker(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		return (square_checker(n, num + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: parameter
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (square_checker(n, 1));
	}
	return (0);
}
