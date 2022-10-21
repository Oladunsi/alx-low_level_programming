#include "main.h"

/**
* print_line - prints a line to the standard output
* @num: this the amount of lines needed to print
*
* Return: Nothing
*/

void print_line(int num)
{
	int a;

	for (a = 0; a < num; a++)
		if (num <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
	_putchar('\n');
}
