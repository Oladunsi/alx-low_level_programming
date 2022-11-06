#include "main.h"

/**
* _isdigit - checks if parameter/argument is uppercase
*@c: An input integer
*
* Return: 1 if upper and 0 if not
*/

int _isdigit(int c)
{
char i = '0';
int isdigit  = 0;

for (; i <= '9'; i++)
{
if (c == i)
{
isdigit = 1;
break;
}
}
return (isdigit);
}
