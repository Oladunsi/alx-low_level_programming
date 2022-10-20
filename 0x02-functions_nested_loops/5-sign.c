#include <stdio.h>
#include "main.h"

/**
* print_sign - checks if argument is > 0 or == 0 or < 0
* @num: An input character
*
* Return: 0 if == 0 or 1 > 0 or -1 if < 0
*/

int print_sign(int num)
{
int value;

if (num > 0)
{
value = 1;
_putchar('+');
}
else if (num == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
