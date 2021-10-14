#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @arr: array
 * Return: said array
 */
char *leet(char *arr)
{
	int idx, idx2;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (idx = 0; arr[idx] != '\0'; idx++)
	{
		for (idx2 = 0; letters[idx2] != '\0'; idx2++)
		{
			if (letters[idx2] == arr[idx])
			{
				arr[idx] = numbers[idx2];
			}
		}
	}

	return (arr);
}
