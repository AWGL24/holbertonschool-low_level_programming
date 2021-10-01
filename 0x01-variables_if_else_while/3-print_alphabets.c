#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int a;
	int A;

	for (a = 97; a <= 122; a++)
		putchar(a);

	for (A = 65; A <= 90; A++)
		putchar(A);

	putchar ('\n');
	return (0);
}
