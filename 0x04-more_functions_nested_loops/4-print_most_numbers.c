#include "main.h"

/**
* print_numbers - prints out 0-9
*
* Return: Nothing
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
