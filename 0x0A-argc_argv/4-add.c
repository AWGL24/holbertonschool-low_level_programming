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
	int idx, idx2, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (idx = 1; idx < argc; idx++)
	{
		for (idx2 = 0; argv[idx][idx2] != '\0'; idx2++)
		{
			if (argv[idx][idx2] < '0' || argv[idx][idx2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[idx]);
	}
	printf("%d\n", sum);

	return (0);
}
