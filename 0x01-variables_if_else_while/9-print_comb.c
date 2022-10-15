#include <stdio.h>
#include <string.h>
/**
* main - program that prints all single digit numbers of base 10 starting from
* All your code should be in the main function
* Return: 0
*/

int main(void)
{
int digits;

digits = '0';
while (digits <= '9')
{
putchar(digits);
if (digits < '9')
{
putchar(',');
putchar(' ');
digits += 1;
}
else
{
digits += 1;
}
}
putchar('\n');
return (0);
}
