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
n = -1 * (num % 10);
}
else
{
n = num % 10;
}
_putchar((n % 10) + '0');
return (n % 10);
}
