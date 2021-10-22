#include <stdio.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	argv++;
	argv--;

	for (i = 0; i < argc - 1; i++)
		;
	printf("%d\n", i);

	return (0);
}
