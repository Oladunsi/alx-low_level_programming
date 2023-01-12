#include "main.h"

/**
 * rev_string - reverses string in place, without printing it
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *tmp = s;
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	
	while (j < i)
	{
		*s[j] = tmp[i];
		i--;
		j++;
	}
}
