#include "main.h"

/**
* more_numbers - prints out 0-14 x10 follow by new line
*
* Return: Nothing
*/

void more_numbers(void)
{
	int a, counter;

	counter = 0;

	while (counter < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
		counter += 1;
	
	}
}
