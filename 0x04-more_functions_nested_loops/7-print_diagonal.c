#include "main.h"

/**
* print_diagonal - prints a diagonal line (\) to the standard output
* @num: this the amount of lines needed to print
*
* Return: Nothing
*/

void print_diagonal(int num)
{
	int a, b;

	if (num > 0)
	{
		for (a = 0; a < num; a++)
		{
			for (b = 0; b < num; b++)
			{
				if (b < a)
					_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
