#include "3-calc.h"
/**
 * main - function that performs simple operations
 * @argc: parameter
 * @argv: parameter
 * Return: result
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", calc(n1, n2));
	return (0);
}
