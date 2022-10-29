#include "main.h"

/**
 * leet - a function that changes a string into Uppercase.
 * @str: an input string
 *
 * Return: A pointer to the resulting string
 */

char *leet(char *str)
{
	int i, j;
	char vypher[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (str[i] == letters[j])
				str[i] = vypher[j];
		i++;
	}
	return (str);
}
