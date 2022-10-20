#include <stdio.h>

/**
* _isalpha - checks if argument is an alphabet (a-z or A-Z) or not
* @letter: An input character
*
* Return: 0 if True and 1 if not
*/

int _isalpha(int letter)
{

char lower, upper;
int isalpha = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (letter == lower || letter == upper)
{
isalpha = 1;
}
}
}
return (isalpha);
}
