#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
