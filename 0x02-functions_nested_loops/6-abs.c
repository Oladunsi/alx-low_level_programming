#include <stdio.h>


/**
* _abs - checks if argument is > 0 or < 0
* @num: An input character
*
* Return: num if >= 0 or (num * -1) if < 0
*/

int _abs(int num)
{

if (num >= 0)
{
return (num);
}
else
{
return (num * -1);
}
}
