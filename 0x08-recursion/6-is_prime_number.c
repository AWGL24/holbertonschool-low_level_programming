#include "main.h"
/**
 * prime_checker - function that check if number is prime.
 * @n: parameter
 * @num: parameter
 * Return: prime checker
*/

int prime_checker(int n, int num)
{
	if (num == 1)
	{
		return (1);
	}
	if (n % num == 0)
	{
		return (0);
	}
	return (prime_checker(n, num - 1));
}

/**
 * is_prime_number - function that returns if a number is prime
 * @n: parameter
 * Return: if number is prime or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_checker(n, n - 1));
}
