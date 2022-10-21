#include "main.h"

/**
* _isupper -  checks if parameter/argument is uppercase
*@letter: an alphabet
* Return: 1 if upper and 0 if not
*/

int _isupper(char letter)
{
char a;
int value;

value = 0;

for (a = 'A'; a <= 'Z'; a++)
{
if (letter == a)
{
value = 1;
break;
}
}
return (value);
}
