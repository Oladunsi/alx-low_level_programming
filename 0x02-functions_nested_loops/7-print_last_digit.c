#include "main.h"


/**
* print_last_digit - This function prints the last digit of a number
* @num: An input character
*
* Return: last digit of number num
*/

int print_last_digit(int num)
{

int n;
if (num < 0)
{
n = -1 * (r % 10);
}
else
{
n = r % 10;
}
_putchar((n % 10) + '0');
return (n % 10);
}
