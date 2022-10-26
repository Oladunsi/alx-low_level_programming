#include "main.h"

/**
 * print_rev - prints str charaters in reverse
 * @str: parameter
 *
 * Return: Nothing.
 */

void print_rev(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	while  (n >= 0)
	{
		_putchar(str[n]);
		--n;
	}
	_putchar('\n');
}
