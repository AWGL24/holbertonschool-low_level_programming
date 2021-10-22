#include <stdio.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc--;
	argc++;

	printf("%s\n", argv[0]);

	return (0);
}
