#include "main.h"

/**
* print_triangle - prints a triangle with (#) to the standard output
* @size: this the amount of lines needed to print
*
* Return: Nothing
*/

void print_triangle(int size)
{
	int a, b, step = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < step)
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
		step -= 1;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
