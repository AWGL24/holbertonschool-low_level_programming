#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int idx, idx2;
	int flag = 1;
	char arr[] = {'\t', '\n', ' ', '.', ',',
			';', '!', '?', '"', '(', ')', '{', '}'};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (flag == 1)
		{
			if ((str[idx] >= 'a' && str[idx] <= 'z'))
				str[idx] = str[idx] - 32;
			flag = 0;
		}

		for (idx2 = 0; arr[idx2] != '\0'; idx2++)
		{
			if (str[idx] == arr[idx2])
				flag = 1;
		}
	}

	return (str);
}
