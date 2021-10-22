#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);

	return (0);
}
